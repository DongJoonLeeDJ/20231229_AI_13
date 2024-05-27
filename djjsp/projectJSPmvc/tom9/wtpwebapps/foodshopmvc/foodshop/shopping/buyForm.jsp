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

  <h3><b>구매 목록</b></h3>

  <form name="inform">
  <table> 
    <tr> 
      <td width="50">번호</td> 
      <td width="300">음식 이름</td> 
      <td width="100">판매 가격</td>
      <td width="150">수량</td> 
      <td width="150">금액</td>
    </tr>   

     <c:forEach items="${fCartList}" var="fCartDto">
		<c:set var="i" value="${i+1}"/>
     
     <tr> 
       <td width="50">${i}</td> 
       <td width="300" align="left">
         <img src="../../imageFile/${fCartDto.foodImage}" 
           border="0" width="30" height="50" align="middle">
           ${fCartDto.foodName}
       </td> 
       <td width="100"><fmt:formatNumber type="number" maxFractionDigits="3" value="${fCartDto.buyPrice}"/> </td>
       <td width="150">${fCartDto.buyCount}</td> 
       <td width="150">
           <fmt:formatNumber type="number" maxFractionDigits="3" value="${fCartDto.buyCount*fCartDto.buyPrice}"/>
      </td>
    </tr>
    </c:forEach>

  <tr>
    <td colspan="5" align="right"><b>총 구매금액 : <fmt:formatNumber type="number" maxFractionDigits="3" value="${total}"/></b></td>
  </tr>
</table>
</form>

<br>
<form method="post" action="buyFood.do" name="buyinput">
 <table>
   <tr> 
    <td  colspan="2"><font size="+1" ><b>주문자 정보</b></font></td>
   </tr>
   <tr> 
    <td  width="200" align="left">성명</td>
    <td  width="400" align="left">${member.name}</td>
   </tr>
   <tr> 
    <td  width="200" align="left">전화번호</td>
    <td  width="400" align="left">${member.tel}</td>
   </tr>
   <tr> 
    <td  width="200" align="left">주소</td>
    <td  width="400" align="left">${member.address}</td>
   </tr>
   <tr> 
  </tr>
  </table>
  <br>
   
<table>
  <tr> 
   <td  colspan="2" align="center"><font size="+1" ><b>배송지 정보</b></font></td>
  </tr>
  <tr> 
    <td  width="200" align="left">배송지</td>
    <td  width="400" align="left">
      <input type="text" name="deliveryName" value="${member.address}">
    </td>
  </tr>
  <tr> 
    <td  width="200" align="left">집전화번호</td>
    <td  width="400" align="left">
      <input type="text" name="deliveryTel" value="${member.tel}">
    </td>
  </tr>
   <tr> 
     <td colspan="2" align="center" bgcolor="<%=value_c%>">
       <input type="submit" value="확인" >
       <input type="button" value="취소" 
       onclick="javascript:window.location='shopMain.do'">      
     </td>
   </tr>
  </table>
  </form>
</body>
</html>