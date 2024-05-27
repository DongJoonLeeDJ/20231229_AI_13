package com.bootlec.dev.book.entity;

import java.time.LocalDateTime;

import org.hibernate.annotations.CreationTimestamp;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.FetchType;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.ManyToOne;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

@Entity   //해당 클래스가 개체라고 알려주는 기능
@Data  //getter setter toString equals hashCode 메서드 자동 생성해주는 것
@Builder  //DTO를 활용할 때 필요함, 다른 클래스의 인스턴스 생성때 도움을 준다.
@NoArgsConstructor // 매개변수가 없는 생성자를 자동생성해줌 -> db에 값을 채워넣을 때 일단 객체를 만들어야 함 그 뒤에 setter를 통해 값을 넣음
@AllArgsConstructor //모든 멤버변수를 매개변수로 설정할 수 있는 생성자를 자동 생성
public class BookLog {  
  @Id //PK같은 것, 유일 식별자
  @GeneratedValue(strategy = GenerationType.IDENTITY)  //DB에 키 생성을 위임, autoincrement같은 기능
  private Integer bookLogId;  

  //@ManyToOne(fetch = FetchType.LAZY) // 데이터를 사용할 때 쿼리를 실행
  @ManyToOne
  @JoinColumn(name="book_id") //참조할 컬럼은 bookId
  private Book book; //book테이블이랑 연결하겠다
  
  @Column(columnDefinition="TEXT") //타입을 문자열로 하겠다
  private String comment;  

  private Integer page;  

  @CreationTimestamp  //데이터 삽입시의 시간
  private LocalDateTime insertDateTime;  
}  
