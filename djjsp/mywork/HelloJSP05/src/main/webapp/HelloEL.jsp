<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<jsp:useBean id ="mdto1" class="com.javalec.ex.Dto" scope="page"/>
<jsp:setProperty name="mdto1" property="id" value="hero430"/>
<jsp:setProperty name="mdto1" property="pw" value="aaa111"/>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%--EL(Expression Language) :  표현식 또는 액션 태그를 대신해서 값을 표현하는 언어 --%>
아이디 : <jsp:getProperty property="id" name="mdto1"/> <br>
비밀번호 : ${mdto1.pw }<br>

<hr>
${param.mp1 }
${param["mp2"] }
<%out.println(request.getParameter("mp1")); %>
<%out.println(request.getParameter("mp2")); %>
<hr>

<hr>
${sessionScope.myparam1 } <br> <!-- (String)session.getAttribute -->
${requestScope.myparam2 }<br> <!-- request.getAttribute -->
<hr>

<%! String value = "djlee"; %>
<%= value %>
<%-- ${value } --%> <%-- 이거 아님...; --%>
${"dj"}
${100+100 }
<Form action="object_EL_Ok.jsp">
ID : <input name="id"> <br>
PW : <input type="password" name="pw"><br>
<input type="submit" value="EL Test">
</Form>




</body>
</html>