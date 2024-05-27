package com.javalec.ex.service;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.dao.FDaoFood;

public class ManagerFoodDeleteService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		int foodid = Integer.parseInt(request.getParameter("food_id"));
		FDaoFood dao = new FDaoFood();
		dao.deletefood(foodid);
	}

}
