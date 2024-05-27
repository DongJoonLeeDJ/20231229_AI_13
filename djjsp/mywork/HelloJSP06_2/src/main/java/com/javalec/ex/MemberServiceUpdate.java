package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class MemberServiceUpdate implements MemberService {

	@Override
	public ArrayList<MemberDto> execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		MemberDto dto = new MemberDto();
		dto.setNum(Integer.parseInt( request.getParameter("num")));
		dto.setName(request.getParameter("name"));
		//new MemberDao().memberUpdate(dto);
		MemberDao dao = new MemberDao();
		dao.memberUpdate(dto);
		return null;
	}

}
