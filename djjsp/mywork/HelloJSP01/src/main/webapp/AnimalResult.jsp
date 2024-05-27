<%@page import="com.javalec.ex.Animal"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h1>동물 정보는 아래와 같습니다.</h1>
<%String totalInfo = (String)session.getAttribute("animalString"); %>
<%=totalInfo %><br>
<%Animal a = (Animal)session.getAttribute("animal"); %>
<% out.println(a.toString()); %><br>
<% out.println("이름:"+ a.getName()); %><br>
<%=a.getAge() %><br>

</body>
</html>