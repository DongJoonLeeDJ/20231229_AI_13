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
        
 <h3><b>${foodKindName} 분류의 목록</b></h3>
    <a href="shopMain.do">메인으로</a>

		<c:forEach items="${foodList}" var="foodDto">
  <table> 
    <tr height="100" bgcolor="<%=value_c%>"> 
      <td rowspan="4">
         <a href="foodContent.do?food_id=${foodDto.foodId}&food_kind=${foodDto.foodKind}">
         <img src="../../imageFile/${foodDto.foodImage}" border="0" width="150" height="180"></a></td> 
      <td width="500"><font size="+1"><b>
         <a href="foodContent.do?food_id=${foodDto.foodId}&food_kind=${foodDto.foodKind}">
         ${foodDto.foodName}</a></b></font></td> 
      <td rowspan="4" width="100"  align="center"  valign="middle">
      		<c:choose>
					<c:when test="${foodDto.foodCount==0}"><b>일시품절</b></c:when>
					<c:otherwise>&nbsp;</c:otherwise>
			</c:choose>
      </td>
    </tr>        
    <tr height="30" bgcolor="<%=value_c%>"> 
       <td width="350">정가 : <fmt:formatNumber type="number" maxFractionDigits="3" value="${foodDto.foodPrice}" /> 원<br>
       </td>
    </tr> 
  </table>
  <br>
</c:forEach>

</body>
</html>