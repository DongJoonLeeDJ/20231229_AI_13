package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class MemberServiceInsert implements MemberService {

	@Override
	public ArrayList<MemberDto> execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		MemberDao m = new MemberDao();
		MemberDto dto = new MemberDto();
		dto.setNum(  Integer.parseInt( request.getParameter("num"))   );
		dto.setName(request.getParameter("name"));
		dto.setPw(request.getParameter("pw"));
		
		m.memberInsert(dto);
		
		
		return null;
	}

}
