<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>

<%@ include file="../../etc/color.jspf"%>

<html>
<head>
<title>Food Shopping Mall</title>
<link href="../../etc/style.css" rel="stylesheet" type="text/css">
</head>
<body bgcolor="<%=bodyback_c%>">

	<c:if test="${empty buyList}">

		<h3>
			<b>주문목록</b>
		</h3>

		<table>
			<tr>
				<td>구매목록이 없습니다.</td>
			</tr>
		</table>
		<a href="../managerMain.do"> 관리자 메인으로</a>
	</c:if>
	<c:if test="${!empty buyList}">
		<h3>
			<b>주문목록</b>
		</h3>
		<a href="../managerMain.do"> 관리자 메인으로</a>
		<table>
			<tr>
				<td>주문번호</td>
				<td>주문자</td>
				<td>음식 이름</td>
				<td>주문 가격</td>
				<td>주문 수량</td>
				<td>주문일</td>
				<td>배송지주소</td>
			</tr>
			<c:forEach items="${buyList}" var="buyDto">
				<tr>
					<td>${buyDto.buyId}</td>
					<td>${buyDto.buyer}</td>
					<td>${buyDto.foodName}</td>
					<td>${buyDto.buyPrice}</td>
					<td>${buyDto.buyCount}</td>
					<td>${buyDto.buyDate}</td>
					<td>${buyDto.deliveryAddress}</td>
				</tr>
			</c:forEach>
		</table>
	</c:if>

</body>
</html>