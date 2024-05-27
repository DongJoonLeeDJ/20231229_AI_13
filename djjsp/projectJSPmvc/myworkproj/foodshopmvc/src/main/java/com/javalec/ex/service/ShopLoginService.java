package com.javalec.ex.service;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoMember;

public class ShopLoginService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		HttpSession session = request.getSession();
		if (session.getAttribute("id") != null) //로그인 된 상태면 db 조회할 필요없음
			return;
		String id = request.getParameter("id");
		String passwd  = request.getParameter("passwd");
		FDaoMember fmemdao = new FDaoMember();
		int check = fmemdao.userCheck(id, passwd);
		if(check == 1) {
			session.setAttribute("id",id);
		} else {
			session.invalidate();
	        // Handle login failure cases
	        response.setContentType("text/html;charset=UTF-8");
	        PrintWriter out;
			try {
				out = response.getWriter();
		        out.println("<script>");
		        out.println("alert('로그인 실패.');");
		        out.println("window.location.href = 'shopMain.do';");
		        out.println("</script>");
		        out.flush();
		        out.close();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		
	}

}
