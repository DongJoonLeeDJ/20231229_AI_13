package com.javalec.ex.service;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoCart;
import com.javalec.ex.dto.FDtoCart;

public class ShopFoodCartInsertService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		   HttpSession session = request.getSession();
		   String food_kind = request.getParameter("food_kind");
		   String buy_count = request.getParameter("buy_count");
		   String food_id = request.getParameter("food_id");
		   String food_name = request.getParameter("food_name");
		   String food_image = request.getParameter("food_image");
		   String buy_price = request.getParameter("buy_price");
		   String buyer = (String)session.getAttribute("id");
		   FDaoCart fcartDao = new FDaoCart();
		   FDtoCart fcartDto = new FDtoCart(buyer, Integer.parseInt(food_id), food_name, Integer.parseInt( buy_price ) , Integer.parseInt(buy_count), food_image,food_kind);
		   fcartDao.insertCart(fcartDto);
	}

}
