package com.bootlec.dev.book.dto;

import jakarta.validation.constraints.Positive;
import lombok.Getter;
import lombok.NonNull;
import lombok.Setter;

@Getter  
@Setter  
public class BookLogCreateDTO {  
    @NonNull  
    @Positive  
    private Integer bookId;  

    @NonNull  
    private String comment;  

    private Integer page;      
}  