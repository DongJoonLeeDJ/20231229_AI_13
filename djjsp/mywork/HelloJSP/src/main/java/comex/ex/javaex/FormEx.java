package comex.ex.javaex;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class FormEx
 */
@WebServlet("/FormEx")
public class FormEx extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public FormEx() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		
		System.out.println("Do Get~~~~~");	
		String age = request.getParameter("age");
		int myage = Integer.parseInt(age);
		HttpSession hs = request.getSession();
		hs.setAttribute("myid", request.getParameter("myid"));
		if(myage>=20) {
			response.sendRedirect("adult.jsp");
		}
		else		{
			response.sendRedirect("child.jsp");
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//doGet(request, response);
		
		System.out.println("Do Post~~~~~");		
		String age = request.getParameter("age");
		int myage = Integer.parseInt(age);
		HttpSession hs = request.getSession();
		hs.setAttribute("myid", request.getParameter("myid"));
		if(myage>=20) {
			response.sendRedirect("adult.jsp");
		}
		else		{
			response.sendRedirect("child.jsp");
		}
	}

}
