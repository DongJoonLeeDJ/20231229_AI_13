package com.javalec.ex.service;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.dao.FDaoFood;
import com.javalec.ex.dto.FDtoFood;

public class ManagerFoodSelectService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		int foodid = Integer.parseInt(request.getParameter("food_id"));
		FDaoFood fdao = new FDaoFood();
		FDtoFood fdto = fdao.getFood(foodid);
		request.setAttribute("updateFood", fdto);

	}

}
