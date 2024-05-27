<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
String age = request.getParameter("age");
String name = request.getParameter("name");
int myage = Integer.parseInt(age);
System.out.println(age);
System.out.println(name);
if(myage>=20)
	response.sendRedirect("https://www.naver.com/");
else
	response.sendRedirect("https://mkt.naver.com/p1/jrschool");
%>
</body>
</html>

