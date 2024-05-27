<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<%@ include file="../../etc/color.jspf"%> 

<html>
<head>
<title>등록된 음식 목록</title>
<link href="../../etc/style.css" rel="stylesheet" type="text/css">
</head>
<body bgcolor="<%=bodyback_c%>">
<a href="../managerMain.do"> 관리자 메인으로</a> &nbsp;
<p> ${foodKind} 분류의 목록: ${foodCount } 개
</p>
<table>
<tr>
    <td align="right" bgcolor="<%=value_c%>">
       <a href="foodRegisterView.do">음식 등록</a>
    </td>
</table>

<c:if test="${!empty foodList}">
<table> 
    <tr height="30" bgcolor="<%=value_c%>"> 
      <td align="center"  width="30">번호</td> 
      <td align="center"  width="30">음식 종류</td> 
      <td align="center"  width="100">음식 이름</td>
      <td align="center"  width="50">가격</td> 
      <td align="center"  width="50">수량</td> 
      <td align="center"  width="50">이미지</td>
      <td align="center"  width="50">수정</td>
      <td align="center"  width="50">삭제</td>         
    </tr>
    
		<c:forEach items="${foodList}" var="foodDto">
			<c:set var="i" value="${i+1}"/>
			<tr height="30">
			<td width="30">${i}</td>
			<td width="30">${foodDto.foodKind}</td>
			<td width="100" align="left">${foodDto.foodName}</td>
			<td width="50" align="right">${foodDto.foodPrice}</td>
			<td width="50" align="right">
			<c:choose>
				<c:when test="${foodDto.foodCount==0}"><font color="red"><%="일시품절"%></font></c:when>
				<c:otherwise>${foodDto.foodCount}</c:otherwise>
			</c:choose>
			</td>
			<td width="50" align="right">${foodDto.foodImage}</td>
			<td width="50"><a href="foodUpdateView.do?food_id=${foodDto.foodId}">수정</a></td>
			<td width="50"><a href="foodDelete.do?food_id=${foodDto.foodId}">삭제</a></td>
		</tr>
		</c:forEach>
</table>
</c:if>
<c:if test="${empty foodList}">
	등록된 음식이 없습니다.
</c:if>

<br>
<a href="../managerMain.do"> 관리자 메인으로</a> 
</body>
</html>
