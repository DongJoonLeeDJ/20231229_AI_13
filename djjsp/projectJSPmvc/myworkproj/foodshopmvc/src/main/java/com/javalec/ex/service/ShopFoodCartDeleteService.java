package com.javalec.ex.service;

import java.io.IOException;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoCart;

public class ShopFoodCartDeleteService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		HttpSession session = request.getSession();
		String list = request.getParameter("list");
		if(list==null)
			list = "all";
		String buyer = (String) session.getAttribute("id");
		//String food_kind = request.getParameter("food_kind");
		if (session.getAttribute("id") == null) {
			//return;
			 try {
				response.sendRedirect("shopMain.do");
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		} else {
			FDaoCart fDaoCart = new FDaoCart();

			if (list.equals("all"))
				fDaoCart.deleteAll(buyer);
			else
				fDaoCart.deleteCart(Integer.parseInt(list));
			try {
//				response.sendRedirect("cartList.do?food_kind=" + food_kind);
				response.sendRedirect("cartList.do");
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}

}
