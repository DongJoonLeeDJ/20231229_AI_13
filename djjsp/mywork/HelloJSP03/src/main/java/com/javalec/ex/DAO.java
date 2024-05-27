package com.javalec.ex;
//DAO = Data Access Object = DB 접근
//DTO = Data Transfer Object = Student 같은 객체, getter/setter만 있는 거
//Vo = Value Object = Student같은 것이며 getter만 되는 거(읽기만 가능함)

//import java.sql.Connection;
//import java.sql.Statement;
//import java.sql.ResultSet;
//import java.sql.PreparedStatement;
import java.sql.*;
import java.util.ArrayList;
public class DAO {
	private String url =
			"jdbc:mysql://localhost:3307/myjsp?"
			+ "useUnicode=true&characterEncoding=utf8&"
			+ "serverTimezone=UTC";
	private String uid = "root";
	private String upw = "1234";
	
	private Connection conn = null;
	private Statement stmt = null;
	private ResultSet rs = null;
	private PreparedStatement pstmt = null;
	
	public DAO() {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
		} catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public ArrayList<String> showMembers() {
		ArrayList<String> results = new ArrayList<String>();
		try {
			conn = DriverManager.getConnection(url,uid,upw);
			stmt = conn.createStatement();
			rs = stmt.executeQuery("select * from djemp");
			while(rs.next()) {
				String result = "";
				result += rs.getString("num")+",";
				result += rs.getString("name");
				results.add(result);
			}
			
		} catch (Exception e) {
			e.printStackTrace();
		} finally { //DB 연결 실패하든 성공하든 커넥션을 끊어줘야 함
			try {
				rs.close();
				stmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
		
		return results;
	}

}









