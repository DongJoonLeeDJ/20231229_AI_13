package com.javalec.ex.service;

import java.io.PrintWriter;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.dao.FDaoMember;

public class ShopJoinService implements FoodService{

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub

        String userId = request.getParameter("userId");
        String userPassword = request.getParameter("userPassword");
        String userName = request.getParameter("userName");
        String userEmail = request.getParameter("userEmail");
        String address = request.getParameter("address");
        String tel = request.getParameter("tel");
        
        FDaoMember fmemdao = new FDaoMember();
        fmemdao.insertmember(userId, userPassword, userName, userEmail, address, tel);

		try
		{

	        // Handle login failure cases
	        response.setContentType("text/html;charset=UTF-8");
	        PrintWriter out = response.getWriter();
	        out.println("<script>");
	        out.println("alert('회원 가입 완료');");
	        out.println("window.location.href = 'shopMain.do';");
	        out.println("</script>");
	        out.flush();
	        out.close();
		} catch(Exception e) {
			e.printStackTrace();
		}
	}

}
