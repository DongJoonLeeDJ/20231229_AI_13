package com.javalec.ex.service;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoBuy;
import com.javalec.ex.dao.FDaoCart;
import com.javalec.ex.dto.FDtoCart;

public class ShopFoodBuyInsertService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {

			HttpSession session = request.getSession();
		   //String account = request.getParameter("account");
		   String deliveryName = request.getParameter("deliveryName");
		   String deliveryTel = request.getParameter("deliveryTel");
		   String buyer = (String)session.getAttribute("id");
		   System.out.println("산 사람 id : " + buyer);
		   FDaoCart fCartDao = new FDaoCart();
		   ArrayList<FDtoCart> cartLists = fCartDao.getCart(buyer);
		   
		   FDaoBuy fBuyDao = new FDaoBuy();
		   
		   fBuyDao.insertBuy(cartLists, buyer, deliveryName, deliveryTel);
	}

}
