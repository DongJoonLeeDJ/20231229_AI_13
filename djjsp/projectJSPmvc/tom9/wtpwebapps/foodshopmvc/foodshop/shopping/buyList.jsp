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

<c:if test="${ count eq 0 }">
   <h3><b>구매목록</b></h3>
   
   <table> 
     <tr><td align="center" >구매목록이 없습니다.</td> </tr>
   </table>
      <input type="button" value="메인으로" 
         onclick="javascript:window.location='shopMain.do'">
</c:if>
<c:if test="${ count ne 0 }">
 <h3><b>구매목록</b></h3>
    <table><tr><td>
    <c:forEach items="${buyList}" var="fBuyDto">
    
       <table> 
      <tr> 
        <td width="150">번호</td>
        <td width="300">음식이름</td> 
        <td width="100">판매가격</td>
        <td width="50">수량</td> 
        <td width="150">금액</td>
      </tr>
      
      <tr> 
        <td align="center"  width="150">${fBuyDto.buyId}</td> 
        <td  width="300" align="left">
           <img src="../../imageFile/${fBuyDto.foodImage}" 
               border="0" width="30" height="50" align="middle">
             ${fBuyDto.foodName}
        </td> 
        <td width="100"><fmt:formatNumber type="number" maxFractionDigits="3" value="${fBuyDto.buyPrice}"/></td>
        <td width="50">${fBuyDto.buyCount}</td> 
        <td width="150" >
           <fmt:formatNumber type="number" maxFractionDigits="3" value="${fBuyDto.buyCount*fBuyDto.buyPrice}"/>
       </td>
      </tr>
    </table>
    </c:forEach>
    </table>
    <br>
    총 금액 : <fmt:formatNumber type="number" maxFractionDigits="3" value="${total}"/> 원
    <br>

</c:if>

<input type="button" value="메인으로" 
  onclick="javascript:window.location='shopMain.do'">

</body>
</html>