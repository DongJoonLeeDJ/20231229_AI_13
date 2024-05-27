package com.javalec.ex.dto;

import java.sql.Timestamp;

//게시판용 객체
//스프링에서는 Vo나 DTO를 쓰기도 하고, HashMap을 쓰기도 함
//jsp에서도 hashMap쓸 수 있음
//hashmap을 쓰면 키-밸류를 그때 그때 추가할 수 있으므로 구조가 유연함
//대신에 한 눈에 뭐가 있는 지 확인할 방법이 없음
//DTO나 VO는 한 눈에 뭐가 있는 지 확인은 쉽게 할 수 있으나
//구조가 좀 유연하지 못 함

public class BDto {
	
	private int bId;
	private String bName;
	private String bTitle;
	private String bContent;
	private Timestamp bDate;
	private int bHit;
	private int bGroup;
	private int bStep;
	private int bIndent;
	
	//alt shift s 누르고 r 키 누르고 select All 체크 후 Generate
	public int getbId() {
		return bId;
	}
	public void setbId(int bId) {
		this.bId = bId;
	}
	public String getbName() {
		return bName;
	}
	public void setbName(String bName) {
		this.bName = bName;
	}
	public String getbTitle() {
		return bTitle;
	}
	public void setbTitle(String bTitle) {
		this.bTitle = bTitle;
	}
	public String getbContent() {
		return bContent;
	}
	public void setbContent(String bContent) {
		this.bContent = bContent;
	}
	public Timestamp getbDate() {
		return bDate;
	}
	public void setbDate(Timestamp bDate) {
		this.bDate = bDate;
	}
	public int getbHit() {
		return bHit;
	}
	public void setbHit(int bHit) {
		this.bHit = bHit;
	}
	public int getbGroup() {
		return bGroup;
	}
	public void setbGroup(int bGroup) {
		this.bGroup = bGroup;
	}
	public int getbStep() {
		return bStep;
	}
	public void setbStep(int bStep) {
		this.bStep = bStep;
	}
	public int getbIndent() {
		return bIndent;
	}
	public void setbIndent(int bIndent) {
		this.bIndent = bIndent;
	}
	//alt shift s 누르고 o 키
	//Omit... 체크 하고, select All 하고 Generate
	
	public BDto(int bId, String bName, String bTitle, String bContent, Timestamp bDate, int bHit, int bGroup, int bStep,
			int bIndent) {
		this.bId = bId;
		this.bName = bName;
		this.bTitle = bTitle;
		this.bContent = bContent;
		this.bDate = bDate;
		this.bHit = bHit;
		this.bGroup = bGroup;
		this.bStep = bStep;
		this.bIndent = bIndent;
	}
	
	
	

}
