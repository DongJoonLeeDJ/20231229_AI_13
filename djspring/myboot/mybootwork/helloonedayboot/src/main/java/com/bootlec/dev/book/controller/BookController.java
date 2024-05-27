package com.bootlec.dev.book.controller;

import java.util.List;
import java.util.NoSuchElementException;
import java.util.stream.Collectors;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.validation.Errors;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.servlet.ModelAndView;

import com.bootlec.dev.book.dto.BookCreateDTO;
import com.bootlec.dev.book.dto.BookEditDTO;
import com.bootlec.dev.book.dto.BookEditResponseDTO;
import com.bootlec.dev.book.dto.BookListResponseDTO;
import com.bootlec.dev.book.dto.BookReadResponseDTO;
import com.bootlec.dev.book.service.BookService;

@Controller
public class BookController {
	@Autowired
	private BookService bookService;
	
	@GetMapping("/book/create")  
	public String create() {  
	    return "book/create";  
	}  
	@PostMapping("/book/create")  
	public String insert(BookCreateDTO bookCreateDTO) {  
	  Integer bookId = this.bookService.insert(bookCreateDTO);  
	  return String.format("redirect:/book/read/%s", bookId);   
	}  
	//springboot2버전에선 (required = true, name="bookId") 안 적어도 됨
	//springboot3버전에선 이런 정보들을 반드시 명시하도록 바뀌었음
	@GetMapping("/book/read/{bookId}")  
	public ModelAndView read(@PathVariable(required = true, name="bookId") Integer bookId) {  
	    ModelAndView mav = new ModelAndView();  

	    try {  
	        BookReadResponseDTO bookReadResponseDTO = this.bookService.read(bookId);  
	        mav.addObject("bookReadResponseDTO", bookReadResponseDTO);  
	        mav.setViewName("book/read");  

	    }catch(NoSuchElementException ex) {  
	        mav.setStatus(HttpStatus.UNPROCESSABLE_ENTITY);  
	        mav.addObject("message", "책 정보가 없습니다.");  
	        mav.addObject("location", "/book");   
	        mav.setViewName("common/error/422");  
	    }  

	    return mav;  
	}  
	
	@ExceptionHandler(NoSuchElementException.class)  
	public ModelAndView noSuchElementExceptionHandler(NoSuchElementException ex) {  
	    //ModelAndView mav = new ModelAndView();  
	    //mav.setStatus(HttpStatus.UNPROCESSABLE_ENTITY);  
	    //mav.addObject("message", "책 정보가 없습니다.");  
	    //mav.addObject("location", "/book/list");           
	    //mav.setViewName("common/error/422");  
	    return error422("책 정보가 없습니다.", "/book/list");  
	}  
	@GetMapping("/book/edit/{bookId}")  
	public ModelAndView edit(@PathVariable(required = true, name="bookId") Integer bookId) throws NoSuchElementException {  
	    ModelAndView mav = new ModelAndView();  
	    BookEditResponseDTO bookEditResponseDTO = this.bookService.edit(bookId);  
	    mav.addObject("bookEditResponseDTO", bookEditResponseDTO);  
	    mav.setViewName("book/edit");  
	    return mav;  
	}  
	
	private ModelAndView error422(String message, String location) {  
	    ModelAndView mav = new ModelAndView();  
	    mav.setStatus(HttpStatus.UNPROCESSABLE_ENTITY);  
	    mav.addObject("message", message);  
	    mav.addObject("location", location);     
	    mav.setViewName("common/error/422");  
	    return mav;  
	}  

	@PostMapping("/book/edit/{bookId}")  
	public ModelAndView update(  @Validated BookEditDTO bookEditDTO, Errors errors) {  
	    if (errors.hasErrors()) {  
	        String errorMessage =   
	            errors  
	            .getFieldErrors()  
	            .stream()  
	            .map(x -> x.getField() + " : " + x.getDefaultMessage())  
	            .collect(Collectors.joining("\n"))  
	        ;  

	        return this.error422(  
	            errorMessage,   
	            String.format("/book/edit/%s", bookEditDTO.getBookId())  
	        );  
	    }  

	    this.bookService.update(bookEditDTO);  

	    ModelAndView mav = new ModelAndView();  
	    mav.setViewName(String.format("redirect:/book/read/%s", bookEditDTO.getBookId()));  
	    return mav;  
	}  

	@PostMapping("/book/delete")  
	public String delete(@RequestParam(name="bookId") Integer bookId) throws NoSuchElementException{  
	    this.bookService.delete(bookId);  
	    return "redirect:/book/list";  
	}  

	@GetMapping(value= {"/book/list", "/book"})  
	public ModelAndView bookList(@RequestParam(required = false,name="title")   String title, @RequestParam(required = false,name="page")Integer page, ModelAndView mav){  
	    mav.setViewName("/book/list");  

	    List<BookListResponseDTO> books = this.bookService.bookList(title, page);         
	    mav.addObject("books", books);        
	    return mav;  
	}  




}
