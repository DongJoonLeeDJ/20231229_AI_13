package com.bootlec.dev.book.service;

import java.util.List;
import java.util.NoSuchElementException;
import java.util.stream.Collectors;

import org.springframework.data.domain.PageRequest;
import org.springframework.data.domain.Pageable;
import org.springframework.data.domain.Sort;
import org.springframework.data.domain.Sort.Direction;
import org.springframework.data.domain.Sort.Order;
import org.springframework.stereotype.Service;

import com.bootlec.dev.book.dto.BookCreateDTO;
import com.bootlec.dev.book.dto.BookEditDTO;
import com.bootlec.dev.book.dto.BookEditResponseDTO;
import com.bootlec.dev.book.dto.BookListResponseDTO;
import com.bootlec.dev.book.dto.BookReadResponseDTO;
import com.bootlec.dev.book.entity.Book;
import com.bootlec.dev.book.entity.BookRepository;

@Service    
public class BookService {    
	
	//DB와 통신하는 클래스(엄밀히 따지면 인터페이스)
    private BookRepository bookRepository;    

    //의존주입 즉 프레임워크 차원에서 자동으로 인스턴스까지 만들어 줌
    //필드주입 : xml파일에 미리 적는 것(servlet~.xml, root~.xml 이런 데 객체 미리 정의함)
    //생성자 의존 주입 : 생성자를 만들어서 그 것을 통하여 객체를 만듦
    public BookService(BookRepository bookRepository) {    
        this.bookRepository = bookRepository;    
    }
    
    public Integer insert(BookCreateDTO bookCreateDTO) {    
    	//Book 클래스의 @Builder는 아래 코드를 위해서 작성이 됨
    	//아래의 코드는 아래 주석에 적힌 코드와 같다.
        Book book = Book.builder()    
            .title(bookCreateDTO.getTitle())    
            .price(bookCreateDTO.getPrice())    
            .build();   
        //이 코드와 똑같음
        /*
         Book book = new Book();
         book.setTitle(bookCreateDTO.getTitle());
         book.setPrice(bookCreateDTO.getPrice());
         */

        //참고로 save 메서드는 insert할 때 혹은 update할 때 쓰임
        this.bookRepository.save(book);    //save = book을 table에 넣는 과정
        return book.getBookId();    //추가한 책의 기본 키를 리턴해 줌
    }    
    
    //bookId로 book 테이블에서 해당 정보 select하고
    //select된 정보를 기반으로 bookReadResponseDTO에 값을 집어넣음
    //만약 select 실패하면 NoSuchElementException이라는 에러를 리턴함
    //select 성공하면 book으로 부터 값을 채어넣은 뒤 bookReadResponseDTO를 리턴함
    public BookReadResponseDTO read(Integer bookId) throws NoSuchElementException {  
        Book book = this.bookRepository.findById(bookId).orElseThrow();  
        //BookReadResponseDTO bookReadResponseDTO = new BookReadResponseDTO();  
        //bookReadResponseDTO.fromBook(book);  
        //return bookReadResponseDTO;  
        return BookReadResponseDTO.BookFactory(book);
    }  
    public BookEditResponseDTO edit(Integer bookId) throws NoSuchElementException {  
        Book book = this.bookRepository.findById(bookId).orElseThrow();  
        //BookEditResponseDTO bookEditResponseDTO = new BookEditResponseDTO();
        //bookEditResponseDTO.fromBook(book);
        //return bookEditResponseDTO;
        return BookEditResponseDTO.BookFactory(book);  
    }  
    public void update(BookEditDTO bookEditDTO) throws NoSuchElementException {  
        Book book = this.bookRepository.findById(bookEditDTO.getBookId()).orElseThrow();  
        book = bookEditDTO.fill(book);        
        //만약 이 시점에 book에 bookId값이 비어있으면 save는 insert로 호출이 됨
        //비어 있지 않으면 save가 update로 호출이 됨
        this.bookRepository.save(book); //이 때의 save는 update를 의미함 
    }  
    public void delete(Integer bookId) throws NoSuchElementException {  
        Book book = this.bookRepository.findById(bookId).orElseThrow();  
        this.bookRepository.delete(book);  
    }  
    public List<BookListResponseDTO> bookList(String title, Integer page){  
        final int pageSize = 3;  //한 번에 보일 책의 개수

        List<Book> books;  

        
        //page, title 자체가 필수 파라미터가 아님
        //localhost:8080/list?page=2&title=aa 이렇게 될 수도 있지만
        //localhost:8080/list
        if (page == null) {  
            page = 0;  
        }else {  
            page -= 1;  //사람들이 첫번째 페이지를 보통 1이라고 입력하기 때문에 처리해 줌
        }  

        if (title == null) {  
            Pageable pageable = PageRequest.of(page, pageSize, Direction.DESC, "insertDateTime");  
            books = this.bookRepository.findAll(pageable).toList();  
        }  
        else {  
            Pageable pageable = PageRequest.of(page, pageSize);  
            Sort sort = Sort.by(Order.desc("insertDateTime"));  
            pageable.getSort().and(sort);  
            books = this.bookRepository.findByTitleContains(title, pageable);  
        }  

        return books.stream().map(book ->  
            new BookListResponseDTO(book.getBookId(), book.getTitle())  
        ).collect(Collectors.toList());  
    }  



}    



