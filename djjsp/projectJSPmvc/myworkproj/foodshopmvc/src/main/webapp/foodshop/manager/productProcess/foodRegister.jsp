<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.sql.Timestamp" %>

<%@ include file="../../etc/color.jspf"%> 

<html>
<head>
<title>상품등록</title>
<link href="../../etc/style.css" rel="stylesheet" type="text/css">
<script type="text/javascript" src="../../etc/script.js"></script>
</head>
<body bgcolor="<%=bodyback_c%>">
<p>음식 등록</p>
<br>

<form method="post" name="writeform" id="fileForm"
     action="foodRegister.do"  enctype="multipart/form-data">   
<table>
   <tr>
    <td align="right" colspan="2" bgcolor="<%=value_c%>">
	    <a href="../managerMain.do"> 관리자 메인으로</a> 
   </td>
   </tr>
   <tr>
    <td  width="100"  bgcolor="<%=value_c%>">분류 선택</td>
    <td  width="400" align="left">
       <select name="food_kind" id="foodKind">
           <option value="100">한식</option>
           <option value="200">중식</option>
           <option value="300">일식</option>
           <option value="400">양식</option>
           <option value="500">치킨</option>
           <option value="600">면</option>
           <option value="700">만두</option>
       </select>
    </td>
  </tr>
  <tr>
    <td  width="100"  bgcolor="<%=value_c%>">상품 이름</td>
    <td  width="400" align="left">
        <input type="text" size="50" maxlength="50" name="food_name" id="foodName"></td>
  </tr>
  <tr>
    <td  width="100"  bgcolor="<%=value_c%>">가 격</td>
    <td  width="400" align="left">
        <input type="text" size="10" maxlength="9" name="food_price" id="foodPrice">원</td>
  </tr>
  <tr>
    <td  width="100"  bgcolor="<%=value_c%>">수량</td>
    <td  width="400" align="left">
        <input type="text" size="10" maxlength="5" name="food_count" id="foodCount">개</td>
  </tr>
  <tr>
    <td  width="100"  bgcolor="<%=value_c%>">이미지</td>
    <td  width="400" align="left">
        <input type="file" name="food_image" id="foodImage"></td>
  </tr>
<tr>      
 <td colspan=2 bgcolor="<%=value_c%>" align="center"> 
  <input type="button" value="음식 등록" onclick="checkForm(this.form)">  
  <input type="reset" value="다시작성">
</td></tr></table>   
   
</form>      
</body>
</html>