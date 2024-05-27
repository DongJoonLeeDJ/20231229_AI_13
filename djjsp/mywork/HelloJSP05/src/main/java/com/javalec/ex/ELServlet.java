package com.javalec.ex;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class ELServlet
 */
@WebServlet("/ELServlet")
public class ELServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ELServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		doAction(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}
	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		//같이 실습한 것1
		//RequestDispatcher dispatcher = request.getRequestDispatcher("HelloEL.jsp?mp1=djzzang&mp2=zzang");
		//dispatcher.forward(request, response);

		//같이 실습한 것2
		//request.setCharacterEncoding("utf-8");
		//response.sendRedirect("HelloEL.jsp?mp1=djzzang&mp2=zzang");
		
		//보여주기1
		//HttpSession hs = request.getSession();
		//hs.setAttribute("myparam1", "papapa");
		//response.sendRedirect("HelloEL.jsp");
		

		//보여주기2
		HttpSession hs = request.getSession();
		hs.setAttribute("myparam1", "papapa");
		request.setAttribute("myparam2", "kakakaka");
		RequestDispatcher dispatcher = request.getRequestDispatcher("HelloEL.jsp");
		dispatcher.forward(request, response);
	}
}















