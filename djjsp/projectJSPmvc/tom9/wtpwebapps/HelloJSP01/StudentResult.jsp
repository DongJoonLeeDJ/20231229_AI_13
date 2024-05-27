<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h1>학생 정보는 아래와 같습니다.</h1>
<%String name = (String)session.getAttribute("name"); 
String age = (String)session.getAttribute("age");
String number = (String)session.getAttribute("number");%>
이름 : <%= name %><br>
나이 : <%= age %><br>
번호 : <%= number %><br>
</body>
</html>