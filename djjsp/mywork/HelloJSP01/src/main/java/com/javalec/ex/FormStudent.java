package com.javalec.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class FormStudent
 */
@WebServlet("/FormStudent")
public class FormStudent extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public FormStudent() {
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
		//doGet(request, response);
		doAction(request,response);
	}
	
	public void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException{
		request.setCharacterEncoding("UTF-8"); //한글 깨짐 방지
		String name = request.getParameter("name");
		String age = request.getParameter("age");
		String number = request.getParameter("number");
		Student s = new Student(name, Integer.parseInt(age), number);
		System.out.println(s);//컴파일러에서 자동으로 .toString()을 붙임
		System.out.println(s.toString());
		HttpSession hs = request.getSession();
		hs.setAttribute("name", name);
		hs.setAttribute("age", age);
		hs.setAttribute("number", number);
		response.sendRedirect("StudentResult.jsp");
	}
	

}
