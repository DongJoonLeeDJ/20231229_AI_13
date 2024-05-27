package com.bootlec.dev.book.dto;

import lombok.Getter;
import lombok.NonNull;
import lombok.Setter;

//@Data는 getter setter toString 등 다 만든다. 그냥 getter랑 setter만 만듦
@Getter
@Setter
public class BookCreateDTO {

	@NonNull //공백일 수 없을 표시 값이 null값이면 NullPointerException을 발생시킴
	private String title;
	
	@NonNull
	private Integer price;
	
}
