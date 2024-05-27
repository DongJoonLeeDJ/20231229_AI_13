<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>글쓰기</title>
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
 
</head>
<body>
	<table border=1 class="table table-striped">
	<form action="write.do" method="post">
			<tr>
				<th>이름</th>
				<td><input type="text" name="bName"></td>
			</tr>
			<tr>
				<th>제목</th>
				<td><input type="text" name="bTitle"></td>
			</tr>
			<tr>
				<th>내용</th>
				<td><textarea rows=10 name="bContent"></textarea></td>
			</tr>
			<tr colspan=2>
				<input type="submit" value="글쓰기" class="btn btn-danger">&nbsp;
				<a href="list.do">목록보기</a>
			</tr>
		</form>
	</table>
	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
  
</body>
</html>