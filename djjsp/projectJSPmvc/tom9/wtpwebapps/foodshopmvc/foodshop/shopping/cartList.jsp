<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt"%>

<%@ include file="../etc/color.jspf"%>

<html>
<head>
<title>food Shopping Mall</title>
<link href="../etc/style.css" rel="stylesheet" type="text/css">
<style>
table {
	margin: auto;
	width: 50%;
}
</style>
</head>
<body bgcolor="<%=bodyback_c%>">
	<header>
		<jsp:include page="../module/top.jsp" flush="false" />
	</header>
	<c:if test="${ count eq 0 }">
		<h3>
			<b>장바구니</b>
		</h3>
		<table>
			<tr>
				<td>장바구니에 담긴 물품이 없습니다.</td>
			</tr>
		</table>
		<input type="button" value="쇼핑계속"
			onclick="javascript:window.location='shopMain.do'">
	</c:if>

	<c:if test="${ count ne 0 }">
		<h3>
			<b>장바구니</b>
		</h3>
		<form name="cartform">
			<table>
				<tr>
					<td width="50">번호</td>
					<td width="300">음식이름</td>
					<td width="100">판매가격</td>
					<td width="150">수량</td>
					<td width="150">금액</td>
				</tr>

				<c:forEach items="${fCartList}" var="fCartDto">
				<c:set var="i" value="${i+1}"/>
				<tr>
					<td width="50">${i}</td> 
       <td  width="300" align="left">
         <img src="../../imageFile/${fCartDto.foodImage}" 
             border="0" width="30" height="50" align="middle">
             ${fCartDto.foodName}
       </td> 
       <td width="100"><fmt:formatNumber type="number" maxFractionDigits="3" value="${fCartDto.buyPrice}"/></td>
       <td width="150">
          <input type="text" name="buy_count" size="5" value="${fCartDto.buyCount}">
          <input type="button" value="수정"
            onclick="javascript:window.location='cartUpdateView.do?cart_id=${fCartDto.cartId}&buy_count=${fCartDto.buyCount}&food_kind=${fCartDto.foodKind}'">
       </td> 
       <td align="center"  width="150">
            <fmt:formatNumber type="number" maxFractionDigits="3" value="${fCartDto.buyCount*fCartDto.buyPrice}"/>
          <input type="button" value="삭제" 
            onclick="javascript:window.location=
            'cartListDel.do?list=${fCartDto.cartId}'">
       </td>
				</tr>
				</c:forEach>


	<tr>
		<td colspan="5" align="right"><b>총 금액 : <fmt:formatNumber type="number" maxFractionDigits="3" value="${total}"/></b></td>
	</tr>
	<tr>
		<td colspan="5"><input type="button" value="구매하기"
			onclick="javascript:window.location='buyView.do'"> <input
			type="button" value="쇼핑계속"
			onclick="javascript:window.location='list.do?food_kind=${food_kind}'">
			<input type="button" value="장바구니비우기"
			onclick="javascript:window.location='cartListDel.do'">
		</td>
	</tr>
	</table>
	</form>

	</c:if>
</body>
</html>