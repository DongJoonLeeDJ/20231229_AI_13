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
table{
	margin : auto;
    width : 50%;
}
</style>
</head>
<body bgcolor="<%=bodyback_c%>">
<header>
<jsp:include page="../module/top.jsp" flush="false" /> 
</header>

<form name="inform" method="post" action="cartInsert.do">
<table> 
   <tr height="30"> 
     <td rowspan="6"  width="150">
        <img src="../../imageFile/${fDto.foodImage}" 
             border="0" width="150" height="200"></td> 
     <td width="500"><font size="+1">
       <b>${fDto.foodName}</b></font></td>
   </tr>
   <tr><td width="500">정가 : <fmt:formatNumber type="number" maxFractionDigits="3" value="${fDto.foodPrice}" />원<br>
   </td>
   <tr><td width="500">수량 : <input type="text" size="5" name="buy_count" value="1"> 개
   
   <c:if test="${userId ne null}"> <%-- null이 아닐 경우 --%>
    <c:choose>
		<c:when test="${fDto.foodCount==0}"><b>일시품절</b></c:when>
		<c:otherwise>
	       <input type="hidden" name="food_id" value="${fDto.foodId}">
	       <input type="hidden" name="food_image" value="${fDto.foodImage}">
	       <input type="hidden" name="food_name" value="${fDto.foodName}">
	       <input type="hidden" name="buy_price" value="${fDto.foodPrice}">
	       <input type="hidden" name="food_kind" value="${fDto.foodKind}">              
	       <input type="submit" value="장바구니에 담기">
		</c:otherwise>
	</c:choose>
	</c:if>

   <input type="button" value="목록으로" 
     onclick="javascript:window.location='list.do?food_kind=${fDto.foodKind}'">
   <input type="button" value="메인으로" 
     onclick="javascript:window.location='shopMain.do'">
   </td>
  </tr> 
</table>
</form>
</body>
</html>