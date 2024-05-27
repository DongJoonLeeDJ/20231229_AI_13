<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<%@ include file="../etc/color.jspf"%> 

<html>
<head>
<title>food Shopping Mall</title>
<link href="../etc/style.css" rel="stylesheet" type="text/css">
</head>
<body bgcolor="<%=bodyback_c%>">
<header>
<jsp:include page="../module/top.jsp" flush="false" /> 
</header>
<form method="POST" name="updateForm"  action="updateCart.do" > 
	 변경할 수량 : 
	 <input type="text" name="buy_count" size="5" value="${param.buy_count}">
     <input type="hidden" name="cart_id" value="${param.cart_id}">
     <input type="hidden" name="food_kind" value="${param.food_kind}">
	 <input type="submit" value="변경" >  
</form>
</body>
</html>