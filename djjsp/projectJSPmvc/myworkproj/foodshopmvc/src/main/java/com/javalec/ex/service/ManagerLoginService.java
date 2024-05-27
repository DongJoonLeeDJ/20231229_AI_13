package com.javalec.ex.service;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoManager;

public class ManagerLoginService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		HttpSession session = request.getSession();
		if (session.getAttribute("managerId") != null) //로그인 된 상태면 db 조회할 필요없음
			return;
		
		
		String id = request.getParameter("managerId");
		String passwd = request.getParameter("managerPasswd");
		FDaoManager dao = new FDaoManager();
		int x = dao.managerCheck(id, passwd);
		if (x == 1) {
			
			session.setAttribute("managerId", id);

		}  else {
			
			session.invalidate();
	        // Handle login failure cases
	        response.setContentType("text/html;charset=UTF-8");
	        PrintWriter out;
			try {
				out = response.getWriter();
		        out.println("<script>");
		        out.println("alert('로그인 실패.');");
		        out.println("window.location.href = 'managerLogin.do';");
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
