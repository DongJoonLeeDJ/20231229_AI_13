package com.javalec.ex.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

public class FDaoManager {
	private DataSource ds;
	private Connection conn = null;
	private PreparedStatement pstmt = null;
	private ResultSet rs = null;
	
	//생성자 호출하게 되면 DB커넥션이 생성됨
	public FDaoManager() {
		try {
			Context initCtx = new InitialContext();
	        Context envCtx = (Context) initCtx.lookup("java:comp/env");
	        ds = (DataSource)envCtx.lookup("jdbc/basicjsp");
		} catch(Exception e) {
			e.printStackTrace();
		}
	} //  관리자 인증 메소드
	 public int managerCheck(String id, String passwd) 
				{
				
			        String dbpasswd="";
					int x=-1;
			        
					try {
						conn=ds.getConnection();
			            
			            pstmt = conn.prepareStatement(
			            	"select managerPasswd from manager where managerId = ? ");
			            pstmt.setString(1, id);
			            
			            rs= pstmt.executeQuery();

						if(rs.next()){
							dbpasswd= rs.getString("managerPasswd"); 
							if(dbpasswd.equals(passwd))
								x= 1; //인증 성공
							else
								x= 0; //비밀번호 틀림
						}else
							x= -1;//해당 아이디 없음
						
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
					return x;
				}
			    
}
