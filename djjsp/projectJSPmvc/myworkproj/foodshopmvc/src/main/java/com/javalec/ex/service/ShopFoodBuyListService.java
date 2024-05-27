package com.javalec.ex.service;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoBuy;
import com.javalec.ex.dto.FDtoBuy;

public class ShopFoodBuyListService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub

		HttpSession session = request.getSession();
		String buyer = (String) session.getAttribute("id");

		ArrayList<FDtoBuy> buyList = null;
		FDtoBuy fBuy = null;
		int count = 0;
//		int number = 0;
		int total = 0;
//		long compareId = 0;
//		long preId = 0;

		if (session.getAttribute("id") == null) {
			try {
				response.sendRedirect("shopMain.do");
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		} else {
			FDaoBuy buyProcess = new FDaoBuy();
			count = buyProcess.getListCount(buyer);
			buyList = buyProcess.getBuyList(buyer);
			
			for(FDtoBuy item : buyList) {
				total += item.getBuyCount()*item.getBuyPrice();
			}
			
			request.setAttribute("buyList", buyList);
			request.setAttribute("total", total);
			request.setAttribute("count", count);
		}

	}

}
