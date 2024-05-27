package com.bootlec.dev.book.dto;

import com.bootlec.dev.book.entity.Book;

import jakarta.validation.constraints.Min;
import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.Positive;
import lombok.Getter;
import lombok.NonNull;
import lombok.Setter;

//@Data는 getter setter toString 등 다 만든다. 그냥 getter랑 setter만 만듦
@Getter
@Setter
public class BookEditDTO {

	@NonNull
	@Positive
	private Integer bookId;
	
	@NonNull //공백일 수 없을 표시 값이 null값이면 NullPointerException을 발생시킴
	@NotBlank //' '
	private String title;
	
	@NonNull
	@Min(1000)
	private Integer price;
	
	//Entity 클래스인 book에 값을 채워넣고, 이를 이용하여 테이블에 반영시킴
	public Book fill(Book book) {
		book.setTitle(this.title);
		book.setPrice(this.price);
		return book;
	}
	
}






