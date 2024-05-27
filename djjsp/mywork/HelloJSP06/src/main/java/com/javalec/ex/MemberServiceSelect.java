package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class MemberServiceSelect implements MemberService {

	@Override
	public ArrayList<MemberDto> execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		MemberDao m = new MemberDao();
		ArrayList<MemberDto> dtos = m.AllmemberSelect();
		request.setAttribute("list", dtos);
		return dtos;
	}

}
