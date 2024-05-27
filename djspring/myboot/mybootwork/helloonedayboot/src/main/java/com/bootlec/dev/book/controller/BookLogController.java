package com.bootlec.dev.book.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.bootlec.dev.book.dto.BookLogCreateDTO;
import com.bootlec.dev.book.dto.BookLogCreateResponseDTO;
import com.bootlec.dev.book.service.BookLogService;

@RestController  //뷰는 없고 데이터에 대해서만 응답
@RequestMapping("/book-log")  //localhost:8080/book-log/create
public class BookLogController {      
    private BookLogService bookLogService;  

    @Autowired  
    public void setBookLogService(BookLogService bookLogService) {  
        this.bookLogService = bookLogService;  
    }  

    @PostMapping("/create")  
    public ResponseEntity<BookLogCreateResponseDTO> insert(@RequestBody BookLogCreateDTO bookLogCreateDTO){  
        BookLogCreateResponseDTO bookLogCreateResponseDTO = this.bookLogService.insert(bookLogCreateDTO);  
        return ResponseEntity.ok(bookLogCreateResponseDTO);  
    }  
}  
