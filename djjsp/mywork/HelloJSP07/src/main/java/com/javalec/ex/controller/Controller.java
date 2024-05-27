package com.javalec.ex.controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.command.BCommand;
import com.javalec.ex.command.BContentCommand;
import com.javalec.ex.command.BDeleteCommand;
import com.javalec.ex.command.BListCommand;
import com.javalec.ex.command.BModifyCommand;
import com.javalec.ex.command.BReplyCommand;
import com.javalec.ex.command.BReplyViewCommand;
import com.javalec.ex.command.BWriteCommand;

/**
 * Servlet implementation class Controller
 */
@WebServlet("*.do")
public class Controller extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Controller() {
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
		request.setCharacterEncoding("utf-8");
		String viewPage = null; //어떤 페이지로 갈 건지 지정
		BCommand command = null; //다형성 이용, view 값에 따라서 목록 조회 등 수행 예정
		//ctrl shift o = 자동 임포트 및 안 쓰는 임포트 삭제 기능
		
		//주소 가져 오는 것
		String uri = request.getRequestURI();
		String conPath = request.getContextPath();
		String com = uri.substring(conPath.length());
		//com : /list.do, /modify.do 등... 커멘드만 남음
		
		//ctrl shift o = 자동 import 및 불필요한 import 삭제
		//ctrl shift s 누르고 r = getter setter 자동 생성
		//ctrl t = f3이랑 비슷하지만 어떤 선언부로 이동할 지 선택이 가능함
		
		//Link With Editor -> 현재 작업하고 있는 걸 자동 선택해 줌
		//점 세개 -> Package Presentation
		//ctrl shift r = 해당 위치로 이동 
		
		
		if(com.equals("/list.do")) {
			viewPage = "/list.jsp";
			command = new BListCommand(); //select 전체
			command.execute(request, response);
		} else if(com.equals("/content_view.do")) {
			viewPage = "/content_view.jsp";
			command = new BContentCommand();//select 특정 데이터 1개
			command.execute(request, response);
		} else if(com.equals("/modify.do")) {
			viewPage = "/list.do";
			command = new BModifyCommand();
			command.execute(request, response);
		} else if(com.equals("/write_view.do")) { //글쓰기 화면
			viewPage = "/write_view.jsp";
		} else if(com.equals("/write.do")) { //글쓰기 명령 실행(db 실행)
			viewPage = "/list.do";
			command = new BWriteCommand();
			command.execute(request, response);
		} else if(com.equals("/delete.do")) {
			viewPage = "/list.do";
			command = new BDeleteCommand();
			command.execute(request, response);
		} else if(com.equals("/reply_view.do")) {
			viewPage = "/reply_view.jsp"; //답글 화면
			command = new BReplyViewCommand();
			command.execute(request, response);
		} else if(com.equals("/reply.do")) {//답글 수행
			viewPage="/list.do";
			command = new BReplyCommand();
			command.execute(request, response);
		}
		
		
		if(viewPage.equals("list.do")) {
			response.sendRedirect(conPath+viewPage);
		} else {
			RequestDispatcher dispatcher =
					request.getRequestDispatcher(viewPage);
			dispatcher.forward(request, response);
		}
		
	}

}



