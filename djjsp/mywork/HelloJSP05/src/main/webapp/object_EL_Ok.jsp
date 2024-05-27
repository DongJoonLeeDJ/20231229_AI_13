<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%-- param =  request.getParameter를 의미함 --%>
<%--EL 태그 버전 --%>
아이디 : ${param.id } <br> <%--두 가지 표기법이 있음 --%>
비밀번호 : ${param["pw"] }<br>
<%
//jsp 버전
out.println(request.getParameter("id"));
out.println(request.getParameter("pw"));
%>
</body>
</html>