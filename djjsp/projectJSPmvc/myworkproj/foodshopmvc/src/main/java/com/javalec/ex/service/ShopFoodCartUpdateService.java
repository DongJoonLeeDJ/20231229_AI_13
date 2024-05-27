package com.javalec.ex.service;

import java.io.IOException;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoCart;

public class ShopFoodCartUpdateService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		HttpSession session = request.getSession();

		 String cart_id = request.getParameter("cart_id");
		 String buy_count = request.getParameter("buy_count");
		 String food_kind = request.getParameter("food_kind");
		 if (session.getAttribute("id") == null) {
				try {
					response.sendRedirect("shopMain.do");
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}       
		 } else {
				FDaoCart fDaoCart = new FDaoCart();
				fDaoCart.updateCount(Integer.parseInt(cart_id), Integer.parseInt(buy_count));
				try {
					response.sendRedirect("cartList.do");
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}       
			 
		 }
	}

}
