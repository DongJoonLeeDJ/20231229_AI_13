<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h1 style="color:red">성인사이트</h1>
<%String myid = (String)session.getAttribute("myid");%>

회원명 : <%= myid %>
</body>
</html>