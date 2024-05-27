<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    
<%@ include file="../etc/color.jspf"%> 
<html>
<head>

<link href="../etc/style.css" rel="stylesheet" type="text/css">
   <style>
    #logo {
            cursor: pointer;
            font-size: 36px;
            font-weight: bold;
            margin-top: 5px;
            margin-left: 5px;
            color: #333;
            background-color:gray;
            text-decoration: none;
        }
       /* 전체영역에서 여백을 없애줌 */
	* {
		margin: 0;
		padding: 0;
	}
/* ul li태그에 리스트 스타일을 없앰 */
	ul li{
		list-style: none;
	}
/* a태그에 텍스트 밑줄을 없애고 색상을 #333 */
	a {
		text-decoration: none;
		color:#333;
	}
/* 글자크기를 16px 맑은 고딕 굵게하고 width넓이 700, 높이 50만큼 배경색은 #ccc, 글자색은 검정색, 라인높이50px
menu박스 가운데정렬, 글자가운데 정렬 */
	#menu {
		font:bold 16px "malgun gothic";
		width:100%;
		height:50px;
		background: #ccc;
		color:black;
		line-height: 50px; 
		margin:0 auto;
		text-align: center;
	}

/* menu태그 자식의 ul의 자식 li를 왼쪽정렬과 넓이 140설정 */
	#menu > ul > li {
		float:left;
		width:140px;
		position:relative;
	}
	#menu>ul{display:inline-block;}

#menu > ul > li > ul {
		width:130px;
		display:none;
		position: absolute;
		font-size:14px;
		background: skyblue;
	}
	
		#menu > ul > li:hover > ul {
		display:block;
	}

#menu > ul > li > ul > li:hover {
		background: orange;
		transition: ease 1s;
		}

    </style>
</head>
<body bgcolor="<%=bodyback_c%>">
<%
 try{
   if(session.getAttribute("id")==null){%>
   <div style="cursor: pointer;" onclick="location.href ='../shopping/shopMain.do'" id="logo">#태그 푸드</div>
   <br>
      
   <form name="inform" method="post" action="login.do">
         아이디:  <input type="text" name="id" size="15" maxlength="50">
         비밀번호:  <input type="password" name="passwd" size="15" maxlength="16">
    <input type="submit" name="Submit" value="로그인">
   </form>
   
   <font color="red">* 반드시 로그인을 하셔야 쇼핑을 하실 수 있습니다.*</font>   
      <br>
   <button onclick="location.href='../shopping/joinView.do'">회원가입</button>    
 <%}else{%>
 <div id='logo'>
    <a href="../shopping/shopMain.do">#태그푸드</a>
 </div>   
      
    <br><br> 
    
       
    
        
    <div id="menu">
	<ul>
		<li><a href="#">밀키트</a>
			<ul>
				<li><a href="../shopping/list.do?food_kind=100">한식</a></li>
				<li><a href="../shopping/list.do?food_kind=200">중식</a></li>
				<li><a href="../shopping/list.do?food_kind=300">일식</a></li>
				<li><a href="../shopping/list.do?food_kind=400">양식</a></li>
			</ul>
		</li>
		<li><a href="#">냉동식품</a>
			<ul>
				<li><a href="../shopping/list.do?food_kind=500">치킨</a></li>
				<li><a href="../shopping/list.do?food_kind=600">면</a></li>
				<li><a href="../shopping/list.do?food_kind=700">만두</a></li>
			</ul>
		</li>
		<li><a href="#">mypage</a>
			<ul>
				<li><a href="../shopping/cartList.do?book_kind=all">장바구니 보기</a></li>
				<li><a href="../shopping/buyList.do">구매목록 보기</a></li>
			</ul>
		</li>
		<li><b><%=session.getAttribute("id")%></b> 님<input type="button"  value="로그아웃" 
        onclick="javascript:window.location='../shopping/logout.do'"></li>
	</ul>
</div>

    
     
     
 <%}
 }catch(NullPointerException e){
	 e.printStackTrace();
 }
 %>
</body>
</html>