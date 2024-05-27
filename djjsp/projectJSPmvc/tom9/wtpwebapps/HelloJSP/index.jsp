<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<!-- method를 적지 않으면 기본 값은 "get" -->
<Form action="FormEx" method="post">
ID : <input name="myid"> <br>
나이 : <input name="age">
<input type="submit" value="post방식">
</Form>

<Form action="FormEx">
ID : <input name="myid"> <br>
나이 : <input name="age">
<input type="submit" value="get방식">
</Form>

</body>
</html>