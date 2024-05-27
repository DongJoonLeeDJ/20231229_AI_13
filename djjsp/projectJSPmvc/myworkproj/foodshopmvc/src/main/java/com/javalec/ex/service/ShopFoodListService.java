package com.javalec.ex.service;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.dao.FDaoFood;
import com.javalec.ex.dto.FDtoFood;

public class ShopFoodListService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		FDaoFood fDao = new FDaoFood();
		ArrayList<FDtoFood> foodList = new ArrayList<FDtoFood>();
	    String food_kind="";
	    food_kind = request.getParameter("food_kind");
	    if(food_kind == null)
	    	food_kind = "all";
	    foodList = fDao.getFoods(food_kind);

	    String food_kindName="";
	    if(food_kind.equals("100")){
	 	   food_kindName="한식";
	    }else if(food_kind.equals("200")){
	 	   food_kindName="중식";  
	    }else if(food_kind.equals("300")){
	 	   food_kindName="일식";
	    }else if(food_kind.equals("400")){
	 		   food_kindName="양식";
	 	}
	 	else if(food_kind.equals("500")){
	 		   food_kindName="치킨";
	 	}
	 	else if(food_kind.equals("600")){
	 		   food_kindName="면";
	 	 }
	 	else if(food_kind.equals("700")){
	 		  food_kindName="만두";
	 	}else if(food_kind.equals("all")){
	 	   food_kindName="전체";
	    }
	    
	    

		request.setAttribute("foodKindName", food_kindName);
		request.setAttribute("foodList", foodList);
	}

}
