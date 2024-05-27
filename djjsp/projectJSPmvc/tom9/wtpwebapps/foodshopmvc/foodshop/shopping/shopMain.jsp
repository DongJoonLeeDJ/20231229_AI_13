<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt"%>

<%@ include file="../etc/color.jspf"%>

<html>
<head>
<meta charset="UTF-8">
<title>Food Shopping Mall</title>
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

	<main>
		<br> <font size="+1"><b> 인기 상품: </b></font>

		<c:forEach items="${bestBuyList}" var="bestBuyDto">
			<table>
				<tr height="100" bgcolor="<%=value_c%>">
					<td rowspan="4"><img
						src="../../imageFile/${bestBuyDto.foodImage}" border="0"
						width="150" height="180"></td>
					<td width="500"><font size="+1"> <b>
								${bestBuyDto.foodName} </b>
					</font></td>
				</tr>
			</table>
			<br>
		</c:forEach>
		<c:forEach items="${rFoodList}" var="rfDto">
			<br>
			<font size="+1"><b>${rfDto.foodKindName} 분류의 음식목록: <a
					href="list.do?food_kind=${rfDto.foodKind}">더보기</a>
			</b></font>
			<table>
				<tr height="100" bgcolor="<%=value_c%>">
					<td rowspan="4"><a
						href="foodContent.do?food_id=${rfDto.foodId}&food_kind=${rfDto.foodKind}">
							<img src="../../imageFile/${rfDto.foodImage}" border="0"
							width="150" height="180">
					</a></td>
					<td width="500"><font size="+1"><b>
					<a href="foodContent.do?food_id=${rfDto.foodId}&food_kind=${rfDto.foodKind}">
									${rfDto.foodName}</a></b></font></td>
					<td rowspan="4" width="100"  align="center"  valign="middle">
						<c:choose>
							<c:when test="${rfDto.foodCount==0}"><b>일시품절</b></c:when>
							<c:otherwise>&nbsp;</c:otherwise>
						</c:choose>
					</td>
				</tr>    
			     <tr height="30" bgcolor="<%=value_c%>"> 
			       <td width="350">정가 : <fmt:formatNumber type="number" maxFractionDigits="3" value="${rfDto.foodPrice}" /> 원<br>
			     </tr> 
			</table>
		</c:forEach>
	</main>


	<footer>
		<jsp:include page="../module/bottom.jsp" flush="false" />
	</footer>
</body>
</html>
