package com.javalec.ex.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import com.javalec.ex.dto.FDtoFood;

public class FDaoFood {
	private DataSource ds;
	private Connection conn = null;
	private PreparedStatement pstmt = null;
	private ResultSet rs = null;

	// 생성자 호출하게 되면 DB커넥션이 생성됨
	public FDaoFood() {
		try {
			Context initCtx = new InitialContext();
			Context envCtx = (Context) initCtx.lookup("java:comp/env");
			ds = (DataSource) envCtx.lookup("jdbc/basicjsp");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	// 음식 입력
	public void insertfood(String foodkind, String foodname, int foodprice, int foodcount, String foodimage) {
		// TODO Auto-generated method stub
		try {
			conn = ds.getConnection();
			String sql = "insert into food(food_kind, food_name, food_price, food_count, food_image) values (?,?,?,?,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, foodkind);
			pstmt.setString(2, foodname);
			pstmt.setInt(3, foodprice);
			pstmt.setInt(4, foodcount);
			pstmt.setString(5, foodimage);
			pstmt.executeUpdate();
		} catch (Exception e) {
			// TODO: handle exception
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				// TODO: handle exception
			}
		}
	}

	// 음식 삭제
	public void deletefood(int foodid) {
		try {
			conn = ds.getConnection();
			String sql = "delete from food where food_id=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setInt(1, foodid);
			pstmt.executeUpdate();
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				// TODO: handle exception
			}
		}
	}

	// 음식 수정
	public void updatefood(int foodid, String foodkind, String foodname, int foodprice, int foodcount,
			String foodimage) {
		// TODO Auto-generated method stub
		try {
			conn = ds.getConnection();
			String sql = "update food set food_kind=?, food_name=?, food_price=?, food_count=?, food_image=? where food_id=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, foodkind);
			pstmt.setString(2, foodname);
			pstmt.setInt(3, foodprice);
			pstmt.setInt(4, foodcount);
			pstmt.setString(5, foodimage);
			pstmt.setInt(6, foodid);
			pstmt.executeUpdate();
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				// TODO: handle exception
				e2.printStackTrace();
			}
		}
	}

	// foodId에 해당하는 음식의 정보를 얻어내는 메소드로 등록된 음식을 수정하기 위해 수정폼으로 읽어들기이기 위한 메소드
	public FDtoFood getFood(int foodId) {
		FDtoFood food = null;
		try {

			conn = ds.getConnection();
			pstmt = conn.prepareStatement("select * from food where food_id = ?");
			pstmt.setInt(1, foodId);
			rs = pstmt.executeQuery();

			if (rs.next()) {

				int foodid = (rs.getInt("food_id"));
				String foodkind = (rs.getString("food_kind"));
				String foodname = (rs.getString("food_name"));
				int foodprice = (rs.getInt("food_price"));
				int foodcount = (rs.getInt("food_count"));
				String foodimage = (rs.getString("food_image"));
				food = new FDtoFood(foodid, foodkind, foodname, foodprice, foodcount, foodimage);
			}
		} catch (Exception e) {

		} finally {
			try {
				rs.close();
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				// TODO: handle exception
			}

		}
		return food;
	}

	// 쇼핑몰 메인에 표시하기 위해서 사용하는 분류별 음식목록을 얻어내는 메소드
	// r : representive : 대표적인 
	public ArrayList<FDtoFood> getrFoodList(){
		
		ArrayList<FDtoFood> rFoodList = new ArrayList<FDtoFood>();

		int i = 0;

		try {

			conn = ds.getConnection();
			String sql = "select food_id, food_kind, food_name, food_price, food_kind_name, food_image, food_count from rFoodList join foodkind on rFoodList.food_kind = foodkind.food_kind_code";

			pstmt = conn.prepareStatement(sql);
			rs = pstmt.executeQuery();
			
			while(rs.next()) {
				int foodid = rs.getInt("food_id");
				String foodkind = rs.getString("food_kind");
				String foodname = rs.getString("food_name");
				int foodprice = rs.getInt("food_price");
				int foodcount = rs.getShort("food_count");
				String foodimage = rs.getString("food_image");
				String foodKindName = rs.getString("food_kind_name");
				FDtoFood rFood = new FDtoFood(foodid, foodkind, foodname, foodprice, foodcount, foodimage, foodKindName);
				rFoodList.add(rFood);
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
		return rFoodList;
	}

	// 분류별또는 전체등록된 음식의 정보를 얻어내는 메소드
	public ArrayList<FDtoFood> getFoods(String food_kind) {
		FDtoFood food = null;
		ArrayList<FDtoFood> foodList = null;

		try {

			conn = ds.getConnection();
			String sql1 = "select * from food";
			String sql2 = "select * from food ";
			sql2 += "where food_kind  = ? order by food_id desc";

			if (food_kind.equals("all")) {
				pstmt = conn.prepareStatement(sql1);
			} else {
				pstmt = conn.prepareStatement(sql2);
				pstmt.setString(1, food_kind);
			}
			rs = pstmt.executeQuery();

			if (rs.next()) {
				foodList = new ArrayList<FDtoFood>();
				do {

					int foodid = rs.getInt("food_id");
					String foodkind = rs.getString("food_kind");
					String foodname = rs.getString("food_name");
					int foodprice = rs.getInt("food_price");
					int foodcount = rs.getShort("food_count");
					String foodimage = rs.getString("food_image");
					food = new FDtoFood(foodid, foodkind, foodname, foodprice, foodcount, foodimage);
					foodList.add(food);
				} while (rs.next());
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
		return foodList;
	}

	// 전체등록된 음식의 수를 얻어내는 메소드
	public int getFoodCount() {

		int x = 0;

		try {
			conn = ds.getConnection();

			pstmt = conn.prepareStatement("select count(*) from food");
			rs = pstmt.executeQuery();

			if (rs.next())
				x = rs.getInt(1);
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

}
