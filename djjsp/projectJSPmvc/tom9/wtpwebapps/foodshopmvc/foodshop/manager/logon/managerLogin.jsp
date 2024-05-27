<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<html>
<head>
<title>로그인</title>
</head>
<body>
  <h2>로그인폼</h2>
    
    <form method="post" action="managerMain.do" id="form_login">
        아이디: <input type="text" name="managerId" maxlength="50" 
               style="ime-mode:inactive;" id="input_id"><br>
        비밀번호: <input type="password" name="managerPasswd" maxlength="16"
               style="ime-mode:inactive;" id="input_pw"><br>
        <input id="input_login" type="submit" value="로그인">
    </form>
    <script>
    	let form_login = document.querySelector('#form_login')
    	form_login.addEventListener('submit', function(event) {
    		
	    		let id = document.querySelector('#input_id')
	    		let pw = document.querySelector('#input_pw')
    		
	    		if(id.value =="" || pw.value  =="") {
	    			alert('id와 pw 모두 입력하세요.')
	    			event.preventDefault(); //원래 이벤트를 막는 것
    			}
    		}
    	)
    </script>
</body>
</html>