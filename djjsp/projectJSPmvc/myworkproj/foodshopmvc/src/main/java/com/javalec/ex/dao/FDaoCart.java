package com.javalec.ex.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import com.javalec.ex.dto.FDtoCart;

public class FDaoCart {
	private DataSource ds;
	private Connection conn = null;
	private PreparedStatement pstmt = null;
	private ResultSet rs = null;

	// 생성자 호출하게 되면 DB커넥션이 생성됨
	public FDaoCart() {
		try {
			Context initCtx = new InitialContext();
			Context envCtx = (Context) initCtx.lookup("java:comp/env");
			ds = (DataSource) envCtx.lookup("jdbc/basicjsp");
		} catch (Exception e) {
			e.printStackTrace();
		}
	} // [장바구니에 담기]를 클릭하면 수행되는 것으로 cart 테이블에 새로운 레코드를 추가

	public void insertCart(FDtoCart cart) {

		String sql = "";

		try {
			conn = ds.getConnection();
			sql = "insert into cart (food_id, buyer," + "food_name,buy_price,buy_count,food_image,food_kind) "
					+ "values (?,?,?,?,?,?,?)";
			pstmt = conn.prepareStatement(sql);

			pstmt.setInt(1, cart.getFoodId());
			pstmt.setString(2, cart.getBuyer());
			pstmt.setString(3, cart.getFoodName());
			pstmt.setInt(4, cart.getBuyPrice());
			pstmt.setInt(5, cart.getBuyCount());
			pstmt.setString(6, cart.getFoodImage());
			pstmt.setString(7, cart.getFoodKind());

			pstmt.executeUpdate();
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

	// id에 해당하는 레코드의 수를 얻어내는 메소드
	public int getListCount(String id) {

		int x = 0;

		try {
			conn = ds.getConnection();

			pstmt = conn.prepareStatement("select count(*) from cart where buyer=?");
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

	// id에 해당하는 레코드의 목록을 얻어내는 메소드
	public ArrayList<FDtoCart> getCart(String id) {

		FDtoCart cart = null;
		String sql = "";
		ArrayList<FDtoCart> lists = null;

		try {
			conn = ds.getConnection();

			sql = "select * from cart where buyer = ?";
			pstmt = conn.prepareStatement(sql);

			pstmt.setString(1, id);
			rs = pstmt.executeQuery();

			lists = new ArrayList<FDtoCart>();

			while (rs.next()) {
				int cartid = (rs.getInt("cart_id"));
				String buyer = rs.getString("buyer");
				int foodid = (rs.getInt("food_id"));
				String foodname = (rs.getString("food_name"));
				int buyprice = (rs.getInt("buy_price"));
				int buycount = (rs.getByte("buy_count"));
				String foodimage = (rs.getString("food_image"));
				String foodKind = rs.getString("food_kind");
				cart = new FDtoCart(cartid, buyer, foodid, foodname, buyprice, buycount, foodimage,foodKind);
				lists.add(cart);
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

	// 장바구니에서 수량을 수정시 실행되는 메소드
	public void updateCount(int cart_id, int count) {

		try {
			conn = ds.getConnection();

			pstmt = conn.prepareStatement("update cart set buy_count=? where cart_id=?");
			pstmt.setInt(1, count);
			pstmt.setInt(2, cart_id);

			pstmt.executeUpdate();
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

	// 장바구니에서 cart_id에대한 레코드를 삭제하는 메소드
	public void deleteCart(int cart_id) {

		try {
			conn = ds.getConnection();

			pstmt = conn.prepareStatement("delete from cart where cart_id=?");
			pstmt.setInt(1, cart_id);

			pstmt.executeUpdate();
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

	// id에 해당하는 모든 레코드를 삭제하는 메소드로 [장바구니 비우기]단추를 클릭시 실행된다.
	public void deleteAll(String id) {

		try {
			conn = ds.getConnection();

			pstmt = conn.prepareStatement("delete from cart where buyer=?");
			pstmt.setString(1, id);

			pstmt.executeUpdate();
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

}
