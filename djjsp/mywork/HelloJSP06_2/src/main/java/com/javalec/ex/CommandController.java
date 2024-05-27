package com.javalec.ex;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.crypto.password.PasswordEncoder;

/**
 * Servlet implementation class CommandController
 */
@WebServlet("*.do")
public class CommandController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CommandController() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		doAction(request,response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}
	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("utf-8");
		String uri = request.getRequestURI();
		System.out.println(uri); ///HelloJSP06_2/select.do
		System.out.println(request.getRequestURL()); //http://localhost:8182/HelloJSP06_2/select.do
		String conPath = request.getContextPath();// /HelloJSP06_2
		System.out.println(conPath);
		String command = uri.substring(conPath.length());
		System.out.println(command); //    /select.do
		
		MemberService mService = null;
		
		if(command.equals("/insert.do")) {
			mService = new MemberServiceInsert();
		} else if (command.equals("/select.do")) {
			//1. mService = new MemberServiceInsert();
			//2. 익명 클래스를 활용하는 방법이 있음
			mService = new MemberService() {
				@Override
				public ArrayList<MemberDto> execute(HttpServletRequest request, HttpServletResponse response) {
					ArrayList<MemberDto> dtos = new MemberDao().memberAllSelect();
					request.setAttribute("list", dtos);
					return dtos;
				}
			};
			
			//람다식
			//mService = (req, res) -> {
			//	return null;
			//};
		} else if(command.equals("/update.do")) {
			mService = new MemberServiceUpdate();
		} else if(command.equals("/delete.do")) {
			mService = new MemberServiceDelete();
		} else if(command.equals("/login.do")) {
			mService = (req, res) -> {
				
				MemberDto dto = new MemberDto();
				dto.setNum(Integer.parseInt(req.getParameter("num")));
				//dto.setName(req.getParameter("name"));
				dto.setPw(req.getParameter("pw"));
				MemberDao dao = new MemberDao();
				String cpw = dao.memberSelect(dto);
				PasswordEncoder p = new BCryptPasswordEncoder();
				System.out.println(p.matches(dto.getPw(), cpw)); //true : 로그인 성공
				return null;
			};
		}
		
		ArrayList<MemberDto> dtos = mService.execute(request,response);
		if(dtos!=null) {
			RequestDispatcher dispatcher = request.getRequestDispatcher("/list.jsp");
			dispatcher.forward(request, response);
		} else {
			response.sendRedirect("CommandController.html");			
		}
		
		
	}

}









