package testcode;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Scanner;

public class OracleTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			Class.forName("oracle.jdbc.driver.OracleDriver");
			String url = "jdbc:oracle:thin:@localhost:1521:xe";
			String id="c##scott";
			String pw = "tiger";
			Connection conn = DriverManager.getConnection(url, id, pw);
			String sql = "select * from mytest";
			
			PreparedStatement psmt = conn.prepareStatement(sql);
			
			//DBMS에 접속해서 특정 테이블 안에 있는 데이터들을 출력
			ResultSet rs = psmt.executeQuery();
			while(rs.next()) {
				System.out.println(rs.getInt(1));
				System.out.println(rs.getString(2));
			}
			//데이터 추가/수정/삭제는 거의 유사함
			//추가하는 코드만 보면 수정이랑 삭제도 쓸 수 있음
			
			Scanner s = new Scanner(System.in);
			System.out.println("번호 입력");
			int num = Integer.parseInt(s.nextLine());
			System.out.println("이름 입력");
			String name = s.nextLine();
			
			//삭제나 수정은 sql문만 고치면 됨
			//sql문 고치고 psmt = conn.prepareStatement(sql);
			//다시해주면 됨
			sql = "insert into mytest(num,name) values(?,?)";
			psmt = conn.prepareStatement(sql);
			psmt.setInt(1,num);
			psmt.setString(2,name);
			int cnt = psmt.executeUpdate();
			if(cnt !=0)
				System.out.println("성공");
			else
				System.out.println("변화된 거 없음");
			
			
			
			
			
		} catch(Exception e) {
			e.printStackTrace();
		}

	}

}
