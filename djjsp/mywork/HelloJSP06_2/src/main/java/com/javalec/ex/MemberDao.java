package com.javalec.ex;

import java.sql.*;
import java.util.ArrayList;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.crypto.password.PasswordEncoder;

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
			e.printStackTrace();
		}
	}
	
	public int memberInsert(MemberDto m) {
		int result = 0; //영향받은 행 수
		try {
			conn = ds.getConnection();
			
			//String sql = "insert into djemp values(?,?)"; //평문
			String sql = "insert into djemp values(?,?,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setInt(1, m.getNum()); //0이 아니고 1부터 시작함
			pstmt.setString(2, m.getName());
			
			
			PasswordEncoder p = new BCryptPasswordEncoder();//암호화
			m.setPw(p.encode(m.getPw())); //입력된 암호문을 encode를 통해서 암호화를 함
			pstmt.setString(3, m.getPw());
			
			result = pstmt.executeUpdate(); //SQL문 실행(insert, delete, update)
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
		return result;
	}
	
	public int memberUpdate(MemberDto m) {
		int result = 0; //영향받은 행 수
		try {
			conn = ds.getConnection();
			String sql = "update djemp set name=? where num=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, m.getName());
			pstmt.setInt(2, m.getNum()); //0이 아니고 1부터 시작함
			result = pstmt.executeUpdate(); //SQL문 실행(insert, delete, update)
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
		return result;
	}
	
	public int memberDelete(MemberDto m) {
		int result = 0; //영향받은 행 수
		try {
			conn = ds.getConnection();
			String sql = "delete from djemp where num=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setInt(1, m.getNum()); //0이 아니고 1부터 시작함
			result = pstmt.executeUpdate(); //SQL문 실행(insert, delete, update)
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
		return result;
	}
	
	

	public ArrayList<MemberDto> memberAllSelect() {
		// TODO Auto-generated method stub
		ArrayList<MemberDto> dtos = new ArrayList<MemberDto>();
		try {
			conn = ds.getConnection();
			stmt = conn.createStatement();
			rs = stmt.executeQuery("select * from djemp");
			while(rs.next()) {
				MemberDto dto = new MemberDto();
				dto.setNum(rs.getInt("num"));
				//dto.setNum(rs.getInt(1));
				dto.setName(rs.getString("name"));
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

	public String memberSelect(MemberDto dto) {
		// TODO Auto-generated method stub
		String pw = null;
		try {
			conn = ds.getConnection();
			String query = "select * from djemp where num=?";
			pstmt = conn.prepareStatement(query);
			pstmt.setInt(1,  dto.getNum());
			rs = pstmt.executeQuery();
			rs.next(); //1줄만 읽어옴, 어차피 num은 pk라서 결과는 1줄 or 0줄
			pw = rs.getString("pw");
			System.out.println("pw="+pw);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				rs.close();
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
		return pw;
	}

}










