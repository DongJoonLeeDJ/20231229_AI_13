package com.bootlec.dev.book.entity;

import java.util.List;

import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;

//1. JpaRepository에 default로 구현된 메서드들이 있다.
//그리고 JPA 자체가 default로 안 되어 있어도 자체적으로 자동으로 구현된 기능들이 있음
//2. <Book, Integer> : Generic
//<첫번째파라미터 = 테이블타입, 두번째파라미터=Pk의타입>
public interface BookRepository extends JpaRepository<Book, Integer> {
	//find+멤버변수명+like구문사용여부(멤버변수의 타입 매개변수, 페이징 관련 변수)
	//Contains = like '%title%'
	//Pageable : List<Book> 형태의 목록을 반환
	public List<Book> findByTitleContains(String title, Pageable pageable);  

}
