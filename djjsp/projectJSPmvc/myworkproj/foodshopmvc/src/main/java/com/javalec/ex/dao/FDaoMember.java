package com.javalec.ex.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import com.javalec.ex.dto.FDtoMember;



public class FDaoMember {
	private DataSource ds;
	private Connection conn = null;
	private PreparedStatement pstmt = null;
	private ResultSet rs = null;
	
	//생성자 호출하게 되면 DB커넥션이 생성됨
	public FDaoMember() {
		try {
			Context initCtx = new InitialContext();
	        Context envCtx = (Context) initCtx.lookup("java:comp/env");
	        ds = (DataSource)envCtx.lookup("jdbc/basicjsp");
		} catch(Exception e) {
			e.printStackTrace();
		}
	}

   
	 //회원정보를 수정하기 위해 기존의 정보를 표시
    public FDtoMember getMember(String id)  {
    	FDtoMember member = null;
        try {
       	 	conn = ds.getConnection();
          
            pstmt = conn.prepareStatement(
          	     "select * from member where id = ?");
            pstmt.setString(1, id);
            rs = pstmt.executeQuery();

            if (rs.next()) {
           	 	member = new FDtoMember();
           	 
                member.setId(rs.getString("id"));
                member.setPassWd(rs.getString("passwd"));
				 member.setName(rs.getString("name"));
				 member.setEmail(rs.getString("email")); 
                member.setTel(rs.getString("tel"));
                member.setAddress(rs.getString("address"));     
			 }
        }catch(Exception ex) {
            ex.printStackTrace();
        }finally {
            if (rs != null) 
           	 try { rs.close(); } catch(SQLException ex) {}
            if (pstmt != null) 
           	 try { pstmt.close(); } catch(SQLException ex) {}
            if (conn != null) 
           	 try { conn.close(); } catch(SQLException ex) {}
        }
		 return member;
    }

  
	 //회원가입
		public void insertmember(String id,String passwd,String name,String email,String address,String tel)
		{
			
			try {
				conn = ds.getConnection();
				String sql = "insert into member values (?,?,?,?,?,?) ";
				pstmt=conn.prepareStatement(sql);
				pstmt.setString(1, id);
				pstmt.setString(2, passwd);
				pstmt.setString(3, name);
				pstmt.setString(4, email);
				pstmt.setString(5, address);
				pstmt.setString(6, tel);
				pstmt.executeUpdate();
			} catch (Exception e) {
				// TODO: handle exception
			}finally {
				try {
					pstmt.close();
					conn.close();
				} catch (Exception e) {
					// TODO: handle exception
				}
		}
		}
		
		//회원탈퇴
		public int deletemember(String iD,String passwD)
		{int x=-1;
		String dbpasswd="";
			try {
				conn=ds.getConnection();
				String sql = "select passwd from member where id=?";
				pstmt=conn.prepareStatement(sql);
				pstmt.setString(1, iD);
				rs=pstmt.executeQuery();
				 if(rs.next()){
					 dbpasswd= rs.getString("passwd"); 
					 if(dbpasswd.equals(passwD)){
						 pstmt = conn.prepareStatement(
	           	             "delete from member where id=?");
	                     pstmt.setString(1, iD);
	                     pstmt.executeUpdate();
						 x= 1; //회원탈퇴 성공
					 }else
						 x= 0; //비밀번호 틀림
				 }
			} catch (Exception e) {
				// TODO: handle exception
			}finally {
				try {
					rs.close();
					pstmt.close();
					conn.close();
				} catch (Exception e2) {
					// TODO: handle exception
				}
			}return x;
		}
		 //회원정보를 수정하기 위해 기존의 정보를 표시
		public FDtoMember beforeupdate(String iD)
		{
			FDtoMember member = null;
			 try {
	        	 
				 conn=ds.getConnection();
	             pstmt = conn.prepareStatement(
	           	     "select * from member where id = ?");
	             pstmt.setString(1, iD);
	             rs = pstmt.executeQuery();

	             if (rs.next()) {
	           
	           String upiD= (rs.getString("id"));
	           String uppasswD = (rs.getString("passwd"));
	           String upnamE = (rs.getString("name"));
	           String upemaiL = (rs.getString("email"));
	           String upaddresS = (rs.getString("address"));
	           String upteL = (rs.getString("tel"));
	           member = new FDtoMember(upiD,uppasswD,upnamE,upemaiL,upaddresS,upteL);
				 }
	         }catch(Exception e) {
	             
	         }finally {try {
	        	 rs.close();
				 pstmt.close();	 
	         conn.close();
			} catch (Exception e2) {
				// TODO: handle exception
			}
	       
		}
		return member;
		}
		//회원정보 수정
		public void updatemember(String iD, String passwD, String namE, String emaiL, String addresS,String teL) {
			try {
				conn = ds.getConnection();
				String sql = "update member set id=? passwd=? name=? email=? address=? tel=?";
				pstmt = conn.prepareStatement(sql);
				pstmt.setString(1, iD);
				pstmt.setString(2, passwD);
				pstmt.setString(3, namE);
				pstmt.setString(4, emaiL);
				pstmt.setString(5, addresS);
				pstmt.setString(6, teL);
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
		public int userCheck(String id, String passwd) {  //사용자 인증처리
					
			         String dbpasswd="";
					 int x=-1;
			       
					 try {
						 conn=ds.getConnection();
			           
			            pstmt = conn.prepareStatement(
			            	"select passwd from member where id = ?");
			            pstmt.setString(1, id);
			            rs= pstmt.executeQuery();

						if(rs.next()){
							dbpasswd= rs.getString("passwd"); 
							if(dbpasswd.equals(passwd))
								x= 1; //인증 성공
							else
								x= 0; //비밀번호 틀림
						}else
							x= -1;//해당 아이디 없음
			         }catch(Exception ex) {
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

				 public int confirmId(String iD) //중복아이디 체크
				 throws Exception {
					
					 int x=-1;
			       
					 try {
						 
						 conn=ds.getConnection();
			             pstmt = conn.prepareStatement(
			           	  "select id from member where id = ?");
			             pstmt.setString(1, iD);
			             rs= pstmt.executeQuery();

						 if(rs.next())
							 x= 1; //해당 아이디 있음
						 else
							 x= -1;//해당 아이디 없음		
			         }catch(Exception ex) {
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