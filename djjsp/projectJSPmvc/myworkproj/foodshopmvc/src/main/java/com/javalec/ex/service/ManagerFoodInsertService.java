package com.javalec.ex.service;

import java.util.Enumeration;
import java.util.*;
import java.io.*;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalec.ex.dao.FDaoFood;
import com.oreilly.servlet.MultipartRequest;
import com.oreilly.servlet.multipart.DefaultFileRenamePolicy;

public class ManagerFoodInsertService implements FoodService {

	@Override
	public void execute(HttpServletRequest request, HttpServletResponse response) {
		
		
		
		// TODO Auto-generated method stub
		//int foodid = Integer.parseInt(request.getParameter("food_id"));
		//String foodkind = request.getParameter("foodKind");
		
		//System.out.println("foodKind = " + foodkind);
		//String foodname = request.getParameter("foodName");
		//System.out.println("foodName = " + foodname);
		//String foodimage = request.getParameter("foodImage");
		//System.out.println("foodImage = " + foodimage);
		//int foodprice = Integer.parseInt(request.getParameter("foodPrice"));
		//int foodcount = Integer.parseInt(request.getParameter("foodCount"));
		
		
		//System.out.println("foodprice = " + foodprice);
		//System.out.println("foodcount = " + foodcount);
		
		FDaoFood dao = new FDaoFood();
		
		

		  String realFolder = "";//웹 어플리케이션상의 절대 경로
		  String filename ="";
		  MultipartRequest imageUp = null; 

		  String saveFolder = "/imageFile";//파일이 업로드되는 폴더를 지정한다.
		  String encType = "utf-8"; //엔코딩타입
		  int maxSize = 2*1024*1024;  //최대 업로될 파일크기 5Mb
		  //현재 jsp페이지의 웹 어플리케이션상의 절대 경로를 구한다
		  ServletContext context = request.getSession().getServletContext();
//		  출처: https://wowstudy.tistory.com/17 [스터디 용 블로그:티스토리]
		  //ServletContext context = getServletContext();
		  realFolder = context.getRealPath(saveFolder);  

		  try{
		     //전송을 담당할 콤포넌트를 생성하고 파일을 전송한다.
		     //전송할 파일명을 가지고 있는 객체, 서버상의 절대경로,최대 업로드될 파일크기, 문자코드, 기본 보안 적용
		     imageUp = new MultipartRequest(
				 request,realFolder,maxSize,encType,new DefaultFileRenamePolicy());
		   
		     //전송한 파일 정보를 가져와 출력한다
		     Enumeration<?> files = imageUp.getFileNames();
		   
		     //파일 정보가 있다면
		     while(files.hasMoreElements()){
		       //input 태그의 속성이 file인 태그의 name 속성값 :파라미터이름
		       String name = (String)files.nextElement();
		   
		       //서버에 저장된 파일 이름
		       filename = imageUp.getFilesystemName(name);
		     }
		  }catch(Exception e){
		     e.printStackTrace();
		  }
		  
		  String food_kind = imageUp.getParameter("food_kind");
		  String food_name = imageUp.getParameter("food_name");
		  String food_price = imageUp.getParameter("food_price");
		  String food_count = imageUp.getParameter("food_count");
		
		
		dao.insertfood(food_kind, food_name, Integer.parseInt( food_price ), Integer.parseInt (food_count ) , filename);
		//request.setAttribute("food_kind", food_kind);
	}

}
