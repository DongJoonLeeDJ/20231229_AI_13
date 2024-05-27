package com.javalec.ex.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Timestamp;
import java.util.ArrayList;

//java 버전에 따라 달랐던 걸로 기억함
//javax 혹은 jakarta를 씀
import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import com.javalec.ex.dto.BDto;

public class BDao {
	
	private DataSource ds;
	private Connection conn = null;
	private PreparedStatement pstmt = null;
	private ResultSet rs = null;
	
	//생성자 호출하게 되면 DB커넥션이 생성됨
	public BDao() {
		try {
			Context ctx = new InitialContext();
			ds = (DataSource)ctx.lookup("java:comp/env/jdbc/mysql");
		} catch(Exception e) {
			e.printStackTrace();
		}
	}

	public ArrayList<BDto> list() {
		// TODO Auto-generated method stub
		ArrayList<BDto> dtos = new ArrayList<BDto>();
		try {
			String sql = "select bid,bname,btitle,bcontent,bdate,bhit,bgroup,bstep,"
					+ "bindent from mvc_board order by bgroup desc, bstep asc";
			//bgroup은 원본
			//bstep은 답글에 대한 순서
			//게시판의 의도 : 최신 글이 맨 위에 올라오고, 답글은 가장 먼저 단 게 위로 올라가게 함
			conn=ds.getConnection();
			pstmt = conn.prepareStatement(sql);
			rs=pstmt.executeQuery(); //select문 실행한 결과를 ResultSet에 저장함
			while(rs.next()) {
				int bId = rs.getInt("bid");
				String bName = rs.getString("bname");
				String bTitle = rs.getString("btitle");
				String bContent = rs.getString("bcontent");
				Timestamp bDate = rs.getTimestamp("bDate");
				int bHit = rs.getInt("bhit");
				int bGroup = rs.getInt("bgroup");
				int bStep = rs.getInt("bstep");
				int bIndent = rs.getInt("bindent");
				
				BDto dto = new BDto(bId, bName, bTitle, bContent, bDate, bHit, bGroup, bStep, bIndent);
				dtos.add(dto);
			}
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
		return dtos;
	}

	public BDto contentView(String bId) {
		BDto dto = null;
		upHit(bId); //조회 올리는 기능
		try {
			conn = ds.getConnection();
			String sql = "select * from mvc_board where bId=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setInt(1, Integer.parseInt(bId));
			rs = pstmt.executeQuery();
			if(rs.next()) {
				int mybId = Integer.parseInt(bId);
				String bName = rs.getString("bname");
				String bTitle = rs.getString("btitle");
				String bContent = rs.getString("bcontent");
				Timestamp bDate = rs.getTimestamp("bdate");
				int bHit = rs.getInt("bhit");
				int bGroup = rs.getInt("bgroup");
				int bStep = rs.getInt("bstep");
				int bIndent = rs.getInt("bindent");
				dto = new BDto(mybId, bName, bTitle, bContent, bDate, bHit, bGroup, bStep, bIndent);
			}
			
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
		return dto;
	}

	//해당 글을 클릭하게 되면, 그 글의 조회수를 올려줘야 함
	private void upHit(String bId) {
		// TODO Auto-generated method stub
		try {
			conn = ds.getConnection();
			String sql = "update mvc_board set bHit = bHit+1 where bId=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, bId); //값만 들어가면 됨
			pstmt.executeUpdate(); //꼭 써야 함. 이게 있어야 조회수 올라감!!!!
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
		
	}

	public void modify(String bId, String bName, String bTitle, String bContent) {
		// TODO Auto-generated method stub
		try {
			conn = ds.getConnection();
			String sql = "update mvc_board set bName=?, bTitle=?, bContent=? where bId=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, bName);
			pstmt.setString(2, bTitle);
			pstmt.setString(3, bContent);
			pstmt.setString(4, bId);
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

	public void write(String bName, String bTitle, String bContent) {
		// TODO Auto-generated method stub
		try { 
			conn = ds.getConnection();
			String sql = 
			"insert into mvc_board(bId, bname, btitle, bcontent, bhit, bgroup,"
			+ "bstep,bindent) values (nextval('mvc_board'), ?,?,?,0,"
			+ "currval('mvc_board'),0,0)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1,bName);
			pstmt.setString(2,bTitle);
			pstmt.setString(3,bContent);
			pstmt.executeUpdate();
		}  catch (Exception e) {
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

	public void delete(String bId) {
		// TODO Auto-generated method stub
		try {
			conn = ds.getConnection();
			String sql = "delete from mvc_board where bId=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, bId);
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

	public BDto reply_view(String bId) { 
		BDto dto = null; 
		try { 
			 conn = ds.getConnection();
			 String sql = "select * from mvc_board where bId=?";
			 pstmt = conn.prepareStatement(sql);
			 pstmt.setInt(1,Integer.parseInt(bId));
			 rs = pstmt.executeQuery(); //1줄만 실행
			 if(rs.next()) {
				 int myId = rs.getInt("bId");
				 String bName = rs.getString("bName");
				 String bTitle = rs.getString("bTitle");
				 String bContent = rs.getString("bContent");
				 Timestamp bDate = rs.getTimestamp("bDate");
				 int bHit = rs.getInt("bHit");
				 int bGroup = rs.getInt("bGroup");
				 int bStep = rs.getInt("bStep");
				 int bIndent = rs.getInt("bIndent");
				 dto = new BDto(myId, bName, bTitle, bContent, bDate, bHit, bGroup, bStep, bIndent);
			 }
		} catch (Exception e) { 
			// TODO: handle exception 
		} finally { 
			try { 
				rs.close(); 
				pstmt.close(); 
				conn.close(); 
			} catch (Exception e2) {
				// TODO: handle exception
			}
		}
		return dto;
	}

	public void reply(String bId, String bName, String bTitle, String bContent, String bGroup, String bStep,
			String bIndent) {
		replyShape(bGroup, bStep);
		
		try {
			conn = ds.getConnection();
			String sql = 
			"insert into mvc_board(bId,bName,btitle,bcontent,bGroup,bStep,bIndent) values "
			+ "(nextval('mvc_board'),?,?,?,?,?,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1,bName);
			pstmt.setString(2,bTitle);
			pstmt.setString(3,bContent);
			pstmt.setInt(4,Integer.parseInt(bGroup));
			pstmt.setInt(5,Integer.parseInt(bStep)+1);
			pstmt.setInt(6,Integer.parseInt(bIndent)+1);
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

	private void replyShape(String bGroup, String bStep) {
		try {
			conn = ds.getConnection();
			String sql = 
			"update mvc_board set bStep=bStep+1 where bGroup=? and bStep>?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setInt(1, Integer.parseInt(bGroup));
			pstmt.setInt(2, Integer.parseInt(bStep));
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

}












