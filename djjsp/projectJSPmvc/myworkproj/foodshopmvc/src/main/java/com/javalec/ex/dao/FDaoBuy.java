package com.javalec.ex.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Timestamp;
import java.util.ArrayList;
import java.util.List;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import com.javalec.ex.dto.FDtoBuy;
import com.javalec.ex.dto.FDtoCart;


public class FDaoBuy {
	private DataSource ds;
	private Connection conn = null;
	private PreparedStatement pstmt = null;
	private ResultSet rs = null;

	// 생성자 호출하게 되면 DB커넥션이 생성됨
	public FDaoBuy() {
		try {
			Context initCtx = new InitialContext();
			Context envCtx = (Context) initCtx.lookup("java:comp/env");
			ds = (DataSource) envCtx.lookup("jdbc/basicjsp");
		} catch (Exception e) {
			e.printStackTrace();
		}
	} // 구매 테이블인 buy에 구매목록 등록

	public void insertBuy(List<FDtoCart> lists, String id, String deliveryName, String deliveryTel) {

		Timestamp reg_date = null;
		String sql = "";
		String maxDate = " ";
		String number = "";
		String todayDate = "";
		String compareDate = "";
		long buyId = 0;
		short nowCount;
		try {
			conn = ds.getConnection();

			reg_date = new Timestamp(System.currentTimeMillis());
			todayDate = reg_date.toString();
			compareDate = todayDate.substring(0, 4) + todayDate.substring(5, 7) + todayDate.substring(8, 10);

			pstmt = conn.prepareStatement("select max(buy_id) from buy");

			rs = pstmt.executeQuery();
			rs.next();
			if (rs.getLong(1) > 0) {
				Long val = new Long(rs.getLong(1));
				maxDate = val.toString().substring(0, 8);
				number = val.toString().substring(8);
				if (compareDate.equals(maxDate)) {
					if ((Integer.parseInt(number) + 1) < 10000)
						buyId = Long.parseLong(maxDate + (Integer.parseInt(number) + 1 + 10000));
					else
						buyId = Long.parseLong(maxDate + (Integer.parseInt(number) + 1));
				} else {
					compareDate += "00001";
					buyId = Long.parseLong(compareDate);
				}
			} else {
				compareDate += "00001";
				buyId = Long.parseLong(compareDate);
			}

			conn.setAutoCommit(false);
			for (int i = 0; i < lists.size(); i++) {
				// 해당 아이디에 대한 cart테이블 레코드를을 가져온후 buy테이블에 추가
				FDtoCart cart = lists.get(i);

				sql = "INSERT INTO buy (buy_id, buyer, food_id, food_name, buy_price, buy_count, food_image, buy_date, deliveryAddress) ";
				sql += "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)";
				pstmt = conn.prepareStatement(sql);

				pstmt.setLong(1, buyId);
				pstmt.setString(2, id);
				pstmt.setInt(3, cart.getFoodId());
				pstmt.setString(4, cart.getFoodName());
				pstmt.setInt(5, cart.getBuyPrice());
				pstmt.setInt(6, cart.getBuyCount());
				pstmt.setString(7, cart.getFoodImage());
				pstmt.setTimestamp(8, reg_date);

				pstmt.setString(9, deliveryName);
				pstmt.executeUpdate();

				// 상품이 구매되었으므로 food테이블의 상품수량을 재조정함
				pstmt = conn.prepareStatement("select food_count from food where food_id=?");
				pstmt.setInt(1, cart.getFoodId());
				rs = pstmt.executeQuery();
				rs.next();

				nowCount = (short) (rs.getShort(1) - cart.getBuyCount());

				sql = "update food set food_count=? where food_id=?";
				pstmt = conn.prepareStatement(sql);

				pstmt.setShort(1, nowCount);
				pstmt.setInt(2, cart.getFoodId());

				pstmt.executeUpdate();
			}

			pstmt = conn.prepareStatement("delete from cart where buyer=?");
			pstmt.setString(1, id);

			pstmt.executeUpdate();

			conn.commit();
			conn.setAutoCommit(true);
		} catch (Exception ex) {
			ex.printStackTrace();
		} finally {
			if (pstmt != null)
				try {
					pstmt.close();
				} catch (SQLException ex) {
				}
			if (conn != null)
				try {
					conn.close();
				} catch (SQLException ex) {
				}
		}
	}

	// id에 해당하는 buy테이블의 레코드수를 얻어내는 메소드
	public int getListCount(String id) {
		Connection conn = null;
		PreparedStatement pstmt = null;
		ResultSet rs = null;

		int x = 0;

		try {
			conn = ds.getConnection();

			pstmt = conn.prepareStatement("select count(*) from buy where buyer=?");
			pstmt.setString(1, id);
			rs = pstmt.executeQuery();

			if (rs.next()) {
				x = rs.getInt(1);
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		} finally {
			if (rs != null)
				try {
					rs.close();
				} catch (SQLException ex) {
				}
			if (pstmt != null)
				try {
					pstmt.close();
				} catch (SQLException ex) {
				}
			if (conn != null)
				try {
					conn.close();
				} catch (SQLException ex) {
				}
		}
		return x;
	}

	// buy테이블의 전체 레코드수를 얻어내는 메소드
	public int getListCount() {

		int x = 0;

		try {
			conn = ds.getConnection();

			pstmt = conn.prepareStatement("select count(*) from buy");
			rs = pstmt.executeQuery();

			if (rs.next()) {
				x = rs.getInt(1);
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		} finally {
			if (rs != null)
				try {
					rs.close();
				} catch (SQLException ex) {
				}
			if (pstmt != null)
				try {
					pstmt.close();
				} catch (SQLException ex) {
				}
			if (conn != null)
				try {
					conn.close();
				} catch (SQLException ex) {
				}
		}
		return x;
	}

	// id에 해당하는 buy테이블의 구매목록을 얻어내는 메소드
	public ArrayList<FDtoBuy> getBuyList(String id) {
		FDtoBuy buy = null;
		String sql = "";
		ArrayList<FDtoBuy> lists = null;

		try {
			conn = ds.getConnection();

			sql = "select * from buy where buyer = ?";
			pstmt = conn.prepareStatement(sql);

			pstmt.setString(1, id);
			rs = pstmt.executeQuery();

			lists = new ArrayList<FDtoBuy>();

			while (rs.next()) {

				String buyid = (rs.getString("buy_id"));
				String buyer = rs.getString("buyer");
				int foodid = (rs.getInt("food_id"));
				String foodname = (rs.getString("food_name"));
				int buyprice = (rs.getInt("buy_price"));
				int buycount = (rs.getByte("buy_count"));
				String foodimage = (rs.getString("food_image"));
				Timestamp buydate = rs.getTimestamp("buy_date");
				String deliveryAddress = rs.getString("deliveryAddress");
				buy = new FDtoBuy(buyid, buyer, foodid, foodname, buyprice, buycount, foodimage, buydate,
						deliveryAddress);

				lists.add(buy);
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		} finally {
			if (rs != null)
				try {
					rs.close();
				} catch (SQLException ex) {
				}
			if (pstmt != null)
				try {
					pstmt.close();
				} catch (SQLException ex) {
				}
			if (conn != null)
				try {
					conn.close();
				} catch (SQLException ex) {
				}
		}
		return lists;
	}

	// buy테이블의 전체 목록을 얻어내는 메소드
	public ArrayList<FDtoBuy> getBuyList()  {

		FDtoBuy buy = null;
		String sql = "";
		ArrayList<FDtoBuy> lists = null;

		try {
			conn = ds.getConnection();

			sql = "select * from buy";
			pstmt = conn.prepareStatement(sql);
			rs = pstmt.executeQuery();

			lists = new ArrayList<FDtoBuy>();

			while (rs.next()) {

				String buyid = (rs.getString("buy_id"));
				String buyer = rs.getString("buyer");
				int foodid = (rs.getInt("food_id"));
				String foodname = (rs.getString("food_name"));
				int buyprice = (rs.getInt("buy_price"));
				int buycount = (rs.getByte("buy_count"));
				String foodimage = (rs.getString("food_image"));
				Timestamp buydate = rs.getTimestamp("buy_date");
				String deliveryAddress = rs.getString("deliveryAddress");

				buy = new FDtoBuy(buyid, buyer, foodid, foodname, buyprice, buycount, foodimage, buydate,
						deliveryAddress);
				lists.add(buy);
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		} finally {
			if (rs != null)
				try {
					rs.close();
				} catch (SQLException ex) {
				}
			if (pstmt != null)
				try {
					pstmt.close();
				} catch (SQLException ex) {
				}
			if (conn != null)
				try {
					conn.close();
				} catch (SQLException ex) {
				}
		}
		return lists;
	}
	public ArrayList<FDtoBuy> getBestfoods(int count) {
	 	        Connection conn = null;
	 	        PreparedStatement pstmt = null;
	 	        ResultSet rs = null;
	 	        ArrayList<FDtoBuy> bestfoodList= new ArrayList<FDtoBuy>();
	 	        int i=0;
	 	        
	 	        try {
	 	            conn = ds.getConnection();
	 	            
	 	            String sql = "select * from buy ";
	 	            sql += "order by buy_count desc limit ?,?";
	 	            
	 	            pstmt = conn.prepareStatement(sql);
	 	            pstmt.setInt(1, 0);
	 	            pstmt.setInt(2, count);
	 	            
	 	        	rs = pstmt.executeQuery();
	 	        	
	 	        	while(rs.next())
	 	        	{
	 	        		String buyId = rs.getString("buy_id");
	 	        		String buyer = rs.getString("buyer");
	 	        		int foodId = rs.getInt("food_id");
	 	        		String foodName=rs.getString("food_name");
	 	        		int buyPrice=rs.getInt("buy_price");
	 	        		int buyCount=rs.getInt("buy_count");
	 	        		String foodImage=rs.getString("food_image");
	 	        		String deliveryAddress=rs.getString("deliveryAddress");
	 	        		FDtoBuy BestFood = new FDtoBuy(buyId, buyer, foodId, foodName, buyPrice, buyCount, foodImage, null, deliveryAddress);
	 	        		bestfoodList.add(BestFood);
	 	        	}

	 	        } catch(Exception ex) {
	 	            ex.printStackTrace();
	 	        } finally {
	 	            if (rs != null) 
	 	            	try { rs.close(); } catch(SQLException ex) {}
	 	            if (pstmt != null) 
	 	            	try { pstmt.close(); } catch(SQLException ex) {}
	 	            if (conn != null) 
	 	            	try { conn.close(); } catch(SQLException ex) {}
	 	        }
	 			return bestfoodList;
	 	    }
}
