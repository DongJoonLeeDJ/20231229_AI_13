package com.javalec.ex.service;


import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.dao.FDaoBuy;
import com.javalec.ex.dao.FDaoFood;
import com.javalec.ex.dto.FDtoBuy;
import com.javalec.ex.dto.FDtoFood;


public class ShopMainService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		FDaoBuy fBuyDao = new FDaoBuy();
		FDaoFood fFoodDao = new FDaoFood();
		
		ArrayList<FDtoBuy> bestBuyList = fBuyDao.getBestfoods(3);
		ArrayList<FDtoFood> rFoodList = fFoodDao.getrFoodList();

		request.setAttribute("bestBuyList", bestBuyList);
		request.setAttribute("rFoodList", rFoodList);
		
	}

}
