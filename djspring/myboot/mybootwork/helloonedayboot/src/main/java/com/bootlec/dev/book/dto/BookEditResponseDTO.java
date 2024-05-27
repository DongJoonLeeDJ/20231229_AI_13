package com.bootlec.dev.book.dto;

import java.time.LocalDateTime;

import com.bootlec.dev.book.entity.Book;

import lombok.Getter;
import lombok.NoArgsConstructor;

@NoArgsConstructor // 매개변수가 없는 생성자를 자동생성해줌
@Getter // Getter만 있으므로 읽기만 할 수 있다.
public class BookEditResponseDTO {
	private Integer bookId;
	private String title;
	private Integer price;
	private LocalDateTime insertDateTime;

	// book(=엔티티 클래스)으로부터 값을 채워넣음
	// 굳이 이렇게 만든 이유 : 지금 당장은 사실... 이렇게 안 만들어 됨
	// 실전에서는 테이블 하나만 쓰지 않음...
	// fromReview 등의 메서드 추가해서 BookReadResponseDTO에 여러가지 엔티티로부터 값을 받을 수 있게 함
	public BookEditResponseDTO fromBook(Book book) {
		this.bookId = book.getBookId();
		this.title = book.getTitle();
		this.price = book.getPrice();
		this.insertDateTime = book.getInsertDateTime();
		return this;
	}

	//static 메서드(정적 메서드, 클래스 메서드)를 이용해서 객체를 생성하는 방법
	//BookReadResponseDTO.BookFactory(book)
	public static BookEditResponseDTO BookFactory(Book book) {
		BookEditResponseDTO bookEditResponseDTO = new BookEditResponseDTO();
		bookEditResponseDTO.fromBook(book);
		return bookEditResponseDTO;
	}
}