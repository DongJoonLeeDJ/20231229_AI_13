package com.javalec.ex.service;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoFood;
import com.javalec.ex.dto.FDtoFood;

public class ShopFoodSelectService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		int foodid = Integer.parseInt(request.getParameter("food_id"));
		// String food_kind = request.getParameter("food_kind");
		FDaoFood fdao = new FDaoFood();
		FDtoFood fdto = fdao.getFood(foodid);
		request.setAttribute("fDto", fdto);

		HttpSession session = request.getSession();

		if(session.getAttribute("id")==null)
			request.setAttribute("userId", null);
		else
			request.setAttribute("userId", session.getAttribute("id"));
			

	}

}
