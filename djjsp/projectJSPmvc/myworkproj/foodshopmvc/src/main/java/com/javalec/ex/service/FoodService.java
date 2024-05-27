package com.javalec.ex.service;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public interface FoodService {
	void execute(HttpServletRequest request, HttpServletResponse response);
}
