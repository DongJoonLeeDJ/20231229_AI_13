package com.javalec.ex;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

public class MemberDao {
	private Connection conn = null;
	private Statement stmt = null;
	private ResultSet rs = null;
	private PreparedStatement pstmt = null;
	
	private DataSource ds = null;
	
	public MemberDao() {
		try {
			Context ctx = new InitialContext();
			ds = (DataSource)ctx.lookup("java:comp/env/jdbc/mysql");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}
	//디자인 패턴 : MVC, 싱글톤, 옵저버 등...
	
	public ArrayList<MemberDto> AllmemberSelect() {
		ArrayList<MemberDto> dtos = new ArrayList<MemberDto>();
		try {
			conn = ds.getConnection();
			stmt = conn.createStatement();
			rs = stmt.executeQuery("select * from djemp");
			while(rs.next()) {
				MemberDto dto = new MemberDto();
				dto.setId(rs.getString("num")); 
				dto.setName(rs.getString("name")); 
				dto.setPw(rs.getString("num")+rs.getString("name")); 
				dtos.add(dto);
			}
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				rs.close();
				stmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
		return dtos;
	}
	

}












