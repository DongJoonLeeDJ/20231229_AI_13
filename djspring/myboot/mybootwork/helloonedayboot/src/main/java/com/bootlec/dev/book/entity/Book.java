package com.bootlec.dev.book.entity;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;

import org.hibernate.annotations.CreationTimestamp;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.FetchType;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

@Entity   //해당 클래스가 개체라고 알려주는 기능
@Data  //getter setter toString equals hashCode 메서드 자동 생성해주는 것
@Builder  //DTO를 활용할 때 필요함, 다른 클래스의 인스턴스 생성때 도움을 준다.
@NoArgsConstructor // 매개변수가 없는 생성자를 자동생성해줌 -> db에 값을 채워넣을 때 일단 객체를 만들어야 함 그 뒤에 setter를 통해 값을 넣음
@AllArgsConstructor //모든 멤버변수를 매개변수로 설정할 수 있는 생성자를 자동 생성
public class Book {  
  @Id //PK같은 것, 유일 식별자
  @GeneratedValue(strategy = GenerationType.IDENTITY)  //DB에 키 생성을 위임, autoincrement같은 기능
  private Integer bookId;  

  @Column(length = 200)  //길이가 200자인 문자 
  private String title;  

  private Integer price;  

  @CreationTimestamp  //데이터 삽입시의 시간
  private LocalDateTime insertDateTime;  
  
  //책 상세 정보 들어갔을 때, 그 때 그 책에 적힌 댓글들(=기록들) 확인하는 용도
  @OneToMany(mappedBy="book", fetch=FetchType.LAZY)
  @Builder.Default //builder를 쓸 때 멤버 변수가 복합 타입일 경우 써준다.
  private List<BookLog> bookLogList = new ArrayList();
  
}  










