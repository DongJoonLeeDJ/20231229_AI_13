<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>내용 상세 보기</title>
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
 
</head>
<body>
	<table border=1 class="table table-striped">
		<form action="modify.do">
			<input type="hidden" name="bId" value="${content_view.bId}">
			<tr>
				<th>번호</th>
				<td>${content_view.bId}</td>
			</tr>
			<tr>
				<th>조회수</th>
				<td>${content_view.bHit}</td>
			</tr>
			<tr>
				<th>글쓴이</th>
				<td><input type="text" name="bName" value="${content_view.bName}"></td>
			</tr>
			<tr>
				<th>제목</th>
				<td><input type="text" name="bTitle" value="${content_view.bTitle}"></td>
			</tr>
			<tr>
				<th>내용</th>
				<td>
					<textarea name="bContent" rows="10">${content_view.bContent}</textarea>
				</td>
			</tr>
			<tr>
				<td colspan=2><input type="submit" value="수정"></td>
				<%-- &nbsp; : 스페이스바 --%>
				<a href="list.do">목록보기</a>&nbsp;&nbsp;
				<a href="delete.do?bId=${content_view.bId}">삭제</a>&nbsp;&nbsp;
				<a href="reply_view.do?bId=${content_view.bId}">답변</a>
			</tr>
		</form>
	</table>
	
	
	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
  
</body>
</html>








