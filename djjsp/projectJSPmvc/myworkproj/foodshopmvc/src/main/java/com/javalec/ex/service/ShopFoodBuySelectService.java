package com.javalec.ex.service;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoCart;
import com.javalec.ex.dao.FDaoMember;
import com.javalec.ex.dto.FDtoCart;
import com.javalec.ex.dto.FDtoMember;

public class ShopFoodBuySelectService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub

		// TODO Auto-generated method stub
		HttpSession session = request.getSession();

		String buyer = (String) session.getAttribute("id");

		ArrayList<FDtoCart> cartList = null;
		FDtoCart fCartDto = null;
		FDtoMember fMember = null;
		int total = 0;

		if (session.getAttribute("id") == null) {
			try {
				response.sendRedirect("shopMain.do");
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		} else {

			FDaoCart fDaoCart = new FDaoCart();
			cartList = fDaoCart.getCart(buyer);

			FDaoMember fDaoMember = new FDaoMember();
			fMember = fDaoMember.getMember(buyer);

			for(FDtoCart item : cartList) {
				total += item.getBuyCount()*item.getBuyPrice();
			}
			request.setAttribute("fCartList", cartList);
			request.setAttribute("member", fMember);
			request.setAttribute("total", total);
			
		}
	}

}
