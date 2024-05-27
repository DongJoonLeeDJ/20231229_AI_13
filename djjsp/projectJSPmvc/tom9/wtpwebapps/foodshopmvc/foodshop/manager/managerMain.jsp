<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    
<%@ include file="../etc/color.jspf"%>
<html>
<head>
<title>상품관리</title>
</head>
<body>
  <form method="post" action="managerLogout.do">
	 <b>관리작업중.. </b><input type="submit" value="로그아웃">	
  </form>
    
   <table>
     <tr><td align="center" bgcolor="<%=bar%>">상품관련 작업</td></tr>
     <tr><td>
     <a href='productProcess/foodRegisterView.do'>상품등록</a></td></tr>
     <tr><td>
     <a href='productProcess/foodList.do'>상품수정/삭제</a>
     </td></tr>
   </table><br><br>
   
   <table>
     <tr><td align="center" bgcolor="<%=bar%>">구매된 상품관련 작업</td></tr>
     <tr><td>
     <a href='orderedProduct/orderedList.do'>전체구매목록 확인</a></td></tr>
   </table>
</body>
</html>