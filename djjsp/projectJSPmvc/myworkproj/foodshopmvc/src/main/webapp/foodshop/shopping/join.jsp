<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<!DOCTYPE html>
<html>
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>Join</title>
</head>
<body>
<header>
<jsp:include page="../module/top.jsp" flush="false" /> 
</header>
    <h1>Join</h1>
    <form method="post" action="join.do">
        <label for="userID">아이디:</label>
        <input type="text" id="userID" name="userId" required>
        <br>
        <label for="userPassword">비밀번호:</label>
        <input type="password" id="userPassword" name="userPassword" required>
        <br>
        <label for="userName">이름:</label>
        <input type="text" id="userName" name="userName" required>
        <br>
        <label for="userEmail">이메일:</label>
        <input type="email" id="userEmail" name="userEmail" required>
        <br>
        <label for="address">주소:</label>
        <input type="text" id="address" name="address" required>
        <br>
        <label for="tel">전화번호:</label>
        <input type="text" id="tel" name="tel" required>
        <br>
        <input type="submit" value="Join">
    </form>
</body>
</html>