package com.javalec.ex.service;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalec.ex.dao.FDaoCart;
import com.javalec.ex.dto.FDtoCart;

public class ShopFoodCartListService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub

		HttpSession session = request.getSession();
		String buyer = (String)session.getAttribute("id");
		if(buyer==null) {
			   try {
				response.sendRedirect("shopMain.do");
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}  
		} else {
			FDaoCart fDaoCart = new FDaoCart();
			int count = fDaoCart.getListCount(buyer);

				request.setAttribute("count", count);

				if(count>0) {
				ArrayList<FDtoCart> fCartList = fDaoCart.getCart(buyer);
				request.setAttribute("fCartList", fCartList);
				int total = 0;
				for(FDtoCart fCart : fCartList) {
					total += fCart.getBuyCount()*fCart.getBuyPrice();
				}
				request.setAttribute("total", total);
				String food_kind = fCartList.get(fCartList.size()-1).getFoodKind();//그냥 가장 최근에 추가한 거(맨 마지막꺼) 장바구니 정보 가져온다.
				request.setAttribute("food_kind", food_kind);
				System.out.println(food_kind);
			}
			
		}
	}

}
