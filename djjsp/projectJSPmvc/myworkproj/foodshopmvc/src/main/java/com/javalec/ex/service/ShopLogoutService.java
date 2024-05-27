package com.javalec.ex.service;

import java.io.PrintWriter;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

public class ShopLogoutService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub

		HttpSession session = request.getSession();
		session.invalidate();

		try
		{

	        // Handle login failure cases
	        response.setContentType("text/html;charset=UTF-8");
	        PrintWriter out = response.getWriter();
	        out.println("<script>");
	        out.println("alert('로그아웃 되었습니다.');");
	        out.println("window.location.href = 'shopMain.do';");
	        out.println("</script>");
	        out.flush();
	        out.close();
		} catch(Exception e) {
			e.printStackTrace();
		}
		
		
	}

}
