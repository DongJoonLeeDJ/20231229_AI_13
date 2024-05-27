package com.bootlec.dev.book.dto;

import java.time.LocalDateTime;

import com.bootlec.dev.book.entity.BookLog;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

//책 상세 정보를 불러올 때 같이 불러올 정보
//BookReadResponseDTO 안에 참고할 객체
@NoArgsConstructor  
@Getter  
@Setter  
public class BookLogReadResponseDTO {  
    private Integer bookLogId;  
    private String comment;  
    private Integer page;  
    private LocalDateTime insertDateTime;  

    private String displayComment;  

    public BookLogReadResponseDTO fromBookLog(BookLog bookLog) {  
        this.bookLogId = bookLog.getBookLogId();  
        this.comment = bookLog.getComment();  
        this.page = bookLog.getPage();  
        this.insertDateTime = bookLog.getInsertDateTime();  

        this.displayComment = (this.page == null ? "" : "(p." + String.valueOf(this.page) + ".) ") + this.comment;   

        return this;  
    }  

    public static BookLogReadResponseDTO BookLogFactory(BookLog bookLog) {  
        BookLogReadResponseDTO bookLogReadResponseDTO = new BookLogReadResponseDTO();  
        bookLogReadResponseDTO.fromBookLog(bookLog);  
        return bookLogReadResponseDTO;  
    }  
}  