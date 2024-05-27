<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%-- JSTL 주의사항 --%>
<%--1. 끝에 /> 이렇게 마무리할 것(반드시) --%>
<%--2. 쌍따옴표 안에 "${}"이렇게 넣는 데, 
쌍따옴표 안에는 공백이 없어야 함!!! --%>
<%--3. 주석은 html용 말고 jsp용으로 써야 함 --%>

<%! String vatName; %>
<%vatName="안녕";%>
<%=vatName %><br>

<c:set var="myName" value="aaa"/>
<c:out value="${myName}"/><br>

<%try {
	int a = 2;
	int b = 0;
	int c = a/b; 
} catch(Exception e) {
	out.println(e.getMessage());
}
%><br>
<c:catch var="myerror">
<%=2/0 %>
</c:catch>
<c:out value="${myerror}"/><br>

<c:if test="${1+2==3}"><br>
1+2=3이 맞습니다.
</c:if>
<c:if test="${1+2!=3}"><br>
이 조건이 틀리므로 출력되지 않음
</c:if>
<br>
<%--EL태그를 섞었음, 1 4 7 10이 출력됨 --%>
<c:forEach var="fEach" begin="1" end="10" step="3">
${fEach}
</c:forEach>
<br>
<c:choose>
	<c:when test="${10>100}">거짓1</c:when>
	<c:when test="${10==10}">참1</c:when>
	<c:otherwise>이도 저도 아닌 경우</c:otherwise>
</c:choose>

</body>
</html>


















