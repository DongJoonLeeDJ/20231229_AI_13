<%@page import="java.util.Enumeration"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%Enumeration enu = session.getAttributeNames();
int i = 0;
while(enu.hasMoreElements()) {
String sName = enu.nextElement().toString();
i++ ;
}
out.println("남아 있는 세션의 수 : " + i);%>
</body>
</html>