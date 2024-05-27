package com.javalec.ex.controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.service.FoodService;
import com.javalec.ex.service.ManagerFoodDeleteService;
import com.javalec.ex.service.ManagerFoodInsertService;
import com.javalec.ex.service.ManagerFoodListService;
import com.javalec.ex.service.ManagerFoodSelectService;
import com.javalec.ex.service.ManagerFoodUpdateService;
import com.javalec.ex.service.ManagerLoginService;
import com.javalec.ex.service.ManagerLogoutService;
import com.javalec.ex.service.ManagerOrderListService;
import com.javalec.ex.service.ShopFoodBuyInsertService;
import com.javalec.ex.service.ShopFoodBuyListService;
import com.javalec.ex.service.ShopFoodBuySelectService;
import com.javalec.ex.service.ShopFoodCartDeleteService;
import com.javalec.ex.service.ShopFoodCartInsertService;
import com.javalec.ex.service.ShopFoodCartListService;
import com.javalec.ex.service.ShopFoodCartUpdateService;
import com.javalec.ex.service.ShopFoodListService;
import com.javalec.ex.service.ShopFoodSelectService;
import com.javalec.ex.service.ShopJoinService;
import com.javalec.ex.service.ShopLoginService;
import com.javalec.ex.service.ShopLogoutService;
import com.javalec.ex.service.ShopMainService;

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
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		// response.getWriter().append("Served at: ").append(request.getContextPath());
		doAction(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

	protected void doAction(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		request.setCharacterEncoding("utf-8");
		response.setCharacterEncoding("utf-8");
		String viewPage = null;
		FoodService service = null;
		String uri = request.getRequestURI();
		System.out.println(uri); /// foodshopmvc/foodshop/manager/logon/managerlogin.do
		String conPath = request.getContextPath();
		System.out.println(conPath); /// foodshopmvc
		String com = uri.substring(conPath.length());
		System.out.println(com); /// foodshop/manager/logon/managerlogin.do

		HttpSession session = request.getSession();
		// session.setAttribute("managerId", id);

		// 로그인 페이지로 가는 건 아닌 데 로그인이 안 된 경우에만 진입.
		// 만약 로그인 페이지로 가는 거라면 이 부분으로 가지 않는다.

		if (com.contains("/manager/")) 
		{
			if (com.equals("/foodshop/manager/managerLogin.do") == false
					&& isLogin(request, response, session) == false) {

				System.out.println("로그인 해야 함!");
				response.sendRedirect(request.getContextPath() + "/foodshop/manager/managerLogin.do");
				return;
			}

			if (com.equals("/foodshop/manager/managerLogin.do")) {
				System.out.println("로그인 화면 진입 중!");
				viewPage = "/foodshop/manager/logon/managerLogin.jsp"; // 로그인 페이지로 강제 이동
			} else if (com.equals("/foodshop/manager/managerMain.do")) {// 로그인이 된 상황
				viewPage = "/foodshop/manager/managerMain.jsp";
				System.out.println("로그인 버튼 누름!");
				service = new ManagerLoginService();
				service.execute(request, response);// 관리자로그인
				try {
					//session을 invalidate()로 날렸을 때 체크하는 방법
					//invalidate() 쓰고 나면 getAttribute로 체크하면 에러가 나타남(무시해도 되긴 하지만 찝찝하다)
					//if(request.isRequestedSessionIdValid()) // 로그인 실패할 경우 여기서 그냥 끝낸다.(out객체가 리다이렉트 처리해줌)
					//근데 이게 관리자에선 안 됨... ㅡㅡ;;; 
					if(session.getAttribute("managerId")==null)
						return;
				} catch(Exception e) {
					e.printStackTrace();
				}

			} else if (com.equals("/foodshop/manager/managerLogout.do")) {
				System.out.println("로그아웃!");
				service = new ManagerLogoutService();
				service.execute(request, response);// 관리자로그인
				return;
			} else if (com.equals("/foodshop/manager/productProcess/foodRegisterView.do")) {
				System.out.println("작성 페이지로 이동!");
				viewPage = "/foodshop/manager/productProcess/foodRegister.jsp";
			} else if (com.equals("/foodshop/manager/productProcess/foodRegister.do")) {
				System.out.println("작성 작성 기능 시작!");
				service = new ManagerFoodInsertService();
				service.execute(request, response);
				viewPage = "/foodshop/manager/productProcess/foodList.do";
			} else if (com.equals("/foodshop/manager/productProcess/foodList.do")) {
				System.out.println("음식 목록 출력!");
				viewPage = "/foodshop/manager/productProcess/foodList.jsp";
				System.out.println(viewPage);
				service = new ManagerFoodListService();
				service.execute(request, response);
			} else if (com.equals("/foodshop/manager/productProcess/foodDelete.do")) {
				System.out.println("음식 삭제!");
				service = new ManagerFoodDeleteService();
				service.execute(request, response);
				viewPage = "/foodshop/manager/productProcess/foodList.do";
			} else if (com.equals("/foodshop/manager/productProcess/foodUpdateView.do")) {
				System.out.println("음식 수정 페이지로 이동!");
				viewPage = "/foodshop/manager/productProcess/foodUpdate.jsp";
				service = new ManagerFoodSelectService();
				service.execute(request, response);
			} else if (com.equals("/foodshop/manager/productProcess/foodUpdate.do")) {
				System.out.println("음식 수정!");
				service = new ManagerFoodUpdateService();
				service.execute(request, response);
				viewPage = "/foodshop/manager/productProcess/foodList.do";
			} else if(com.equals("/foodshop/manager/orderedProduct/orderedList.do")) {
				System.out.println("구매된 상품관련 작업 전체구매목록 확인");
				service = new ManagerOrderListService();
				service.execute(request, response);
				viewPage = "/foodshop/manager/orderedProduct/orderedList.jsp";
				
			}

			if (viewPage.equals("/foodshop/manager/productProcess/foodList.do")) {
				response.sendRedirect(conPath + viewPage);
			} else {
				RequestDispatcher dispatcher = request.getRequestDispatcher(viewPage);
				dispatcher.forward(request, response);
			}
		}
		else 
		{

			if (com.equals("/foodshop/shopping/shopMain.do")) {
				System.out.println("메인 화면~!");
				viewPage = "/foodshop/shopping/shopMain.jsp";
				service = new ShopMainService();
				service.execute(request, response);
			} else if(com.equals("/foodshop/shopping/login.do")) {
				System.out.println("일반 로그인 화면~!");
				viewPage = "/foodshop/shopping/shopMain.do";
				service = new ShopLoginService();
				service.execute(request, response);
				//session을 invalidate()로 날렸을 때 체크하는 방법
				//invalidate() 쓰고 나면 getAttribute로 체크하면 에러가 나타남(무시해도 되긴 하지만 찝찝하다)
				//if(request.isRequestedSessionIdValid()) // 로그인 실패할 경우 여기서 그냥 끝낸다.(out객체가 리다이렉트 처리해줌)
				//근데 이게 관리자에선 안 됨... ㅡㅡ;;; 
				if(request.isRequestedSessionIdValid() == false)
					return;
				
			} else if(com.equals("/foodshop/shopping/logout.do")) {
				System.out.println("일반 로그아웃~!");
				viewPage = "/foodshop/shopping/shopMain.do";
				service = new ShopLogoutService();
				service.execute(request, response);
				if(request.isRequestedSessionIdValid() == false)
					return;
			} else if(com.equals("/foodshop/shopping/joinView.do")) {
				System.out.println("회원 가입 화면~!");
				viewPage = "/foodshop/shopping/join.jsp";
			} else if(com.equals("/foodshop/shopping/join.do")) {
				System.out.println("일반 회원 가입 진행~!");
				viewPage = "/foodshop/shopping/shopMain.do";
				service = new ShopJoinService();
				service.execute(request, response);
				return;
			} else if(com.equals("/foodshop/shopping/list.do")) {
				System.out.println("음식 목록 보여주기~!");
				viewPage = "/foodshop/shopping/list.jsp";
				service = new ShopFoodListService();
				service.execute(request, response);
			} else if(com.equals("/foodshop/shopping/foodContent.do")) {
				viewPage = "/foodshop/shopping/foodContent.jsp";
				service = new ShopFoodSelectService();
				service.execute(request, response);
			} else if(com.equals("/foodshop/shopping/cartInsert.do")) {
				viewPage = "/foodshop/shopping/cartList.do";
				service = new ShopFoodCartInsertService();
				service.execute(request, response);
			} else if(com.equals("/foodshop/shopping/cartList.do")) {
				viewPage = "/foodshop/shopping/cartList.jsp";
				service = new ShopFoodCartListService();
				service.execute(request, response);
			} else if(com.equals("/foodshop/shopping/cartListDel.do")) {
				System.out.println("지우기");
				viewPage = "/foodshop/shopping/cartList.jsp";
				service = new ShopFoodCartDeleteService();
				service.execute(request, response);
				return;
			} else if(com.equals("/foodshop/shopping/cartUpdateView.do")) {
				viewPage = "/foodshop/shopping/updateCartForm.jsp";
			} else if(com.equals("/foodshop/shopping/updateCart.do")) {
				viewPage = "/foodshop/shopping/cartList.do";
				service = new ShopFoodCartUpdateService();
				service.execute(request, response);
				return;
			} else if(com.equals("/foodshop/shopping/buyView.do")) {
				viewPage = "/foodshop/shopping/buyForm.jsp";
				service = new ShopFoodBuySelectService();
				service.execute(request, response);
			} else if(com.equals("/foodshop/shopping/buyFood.do")) {
				System.out.println("음식샀다.");
				viewPage = "/foodshop/shopping/buyList.do";
				service = new ShopFoodBuyInsertService();
				service.execute(request, response);
			} else if(com.equals("/foodshop/shopping/buyList.do")) {
				viewPage = "/foodshop/shopping/buyList.jsp";
				service = new ShopFoodBuyListService();
				service.execute(request, response);
			} 
			
			if (viewPage.equals("/foodshop/shopping/shopMain.do") || viewPage.equals("/foodshop/shopping/cartList.do") || viewPage.equals("/foodshop/shopping/buyList.do")) {
				response.sendRedirect(conPath + viewPage);
			} else {
				RequestDispatcher dispatcher = request.getRequestDispatcher(viewPage);
				dispatcher.forward(request, response);
			}
		}

	}
	
	private boolean isLogin(HttpServletRequest request, HttpServletResponse response, HttpSession session) {
		// TODO Auto-generated method stub

		try {
			if (request.getParameter("managerId")==null && session.getAttribute("managerId") == null) { 
				return false;
			}
		} catch (Exception e) {
			e.printStackTrace();
			return false;
		}

		return true;
	}
}
