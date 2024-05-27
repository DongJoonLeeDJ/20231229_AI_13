<%@page import="java.util.ArrayList"%>
<%@page import="com.javalec.ex.Dao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<table border=1>
		<thead>
			<th>번호,이름</th>
		</thead>
		<tbody>
			<%ArrayList<String> results = new Dao().AllmemberSelect();
			for(String item : results) {%>
			<tr>
				<td><%=item %></td>
			</tr>
			<%} %>
		</tbody>
	</table>
</body>
</html>