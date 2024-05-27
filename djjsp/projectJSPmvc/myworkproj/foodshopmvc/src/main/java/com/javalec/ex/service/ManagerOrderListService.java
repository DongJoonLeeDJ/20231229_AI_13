package com.javalec.ex.service;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.dao.FDaoBuy;
import com.javalec.ex.dto.FDtoBuy;

public class ManagerOrderListService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		FDaoBuy fDao = new FDaoBuy();
		ArrayList<FDtoBuy> buyList = new ArrayList<FDtoBuy>();
		
	    int count = fDao.getListCount();
	    
	    if (count > 0) {
	    	buyList = fDao.getBuyList();
	    }
	    
		request.setAttribute("buyCount", count);
		request.setAttribute("buyList", buyList);
	}

}
