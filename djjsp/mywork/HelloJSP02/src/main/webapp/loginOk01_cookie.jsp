<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%! String id,pw; %>
	<% id = request.getParameter("id");
	   pw = request.getParameter("pw");
	   if(id.equals("admin") && pw.equals("1234")) {
		   Cookie cookie = new Cookie("id",id); //키값이 id이고 값은 admin인 쿠키 생성
		   cookie.setMaxAge(60); //쿠키 보관 시간 1분
		   response.addCookie(cookie);
		   response.sendRedirect("welcome01_cookie.jsp");
	   } else {
	   	response.sendRedirect("login01_cookie.html");
	   }%>
</body>
</html>