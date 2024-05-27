package com.mvcspring.dev;

import java.util.List;
import java.util.Map;

import org.mybatis.spring.SqlSessionTemplate;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Repository;

@Repository //BookDao 클래스가 DB접근하여 데이터를 다루는 클래스다라는 표시
public class BookDao {
	
	@Autowired //자동으로 연결, 자동으로 객체를 생성해 줌. root-context를 참조하여 
	SqlSessionTemplate sqlSessionTemplate;
	
	//map = Controller에서 받아올 것
	//form 태그에 있는 값들, title, category, price
	public int insert(Map<String, Object> map) {
		return this.sqlSessionTemplate.insert("book.insert", map);
	}
	public Map<String, Object> selectDetail(Map<String, Object> map) {
	    return this.sqlSessionTemplate.selectOne("book.select_detail", map);
	}
	public int update(Map<String, Object> map) {  
		return this.sqlSessionTemplate.update("book.update", map);  
	}  
	public int delete(Map<String, Object> map) {  
		return this.sqlSessionTemplate.delete("book.delete", map);  
		}  
	public List<Map<String, Object>> selectList(Map<String, Object> map) {  
		return this.sqlSessionTemplate.selectList("book.select_list", map);  
		}  

	public int countBookBoard(Map<String,Object> map) {
		return this.sqlSessionTemplate.selectOne
				("book.countBookBoard",map);
	}


}
