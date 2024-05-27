<%@page import="javalec.com.ex.Student"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<jsp:useBean id="s1" class="javalec.com.ex.Student" scope="page"/>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<jsp:setProperty property="name" name="s1" value="이동준"/>
<jsp:setProperty property="age" name="s1" value="35"/>
이름 : <jsp:getProperty property="name" name="s1"/>
나이 : <jsp:getProperty property="age" name="s1"/>

<%Student s2 = new Student(); 
//<%@page import="javalec.com.ex.Student"
s2.setName("한형빈");
s2.setAge(25);
out.println("<br>");
out.print(s2.getName());
out.print(s2.getAge()+"");
%>
</body>
</html>










