package com.mvcspring.dev;

import java.util.List;
import java.util.Map;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service // 서비스 로직, 실제로 데이터 처리하는 부분
public class BookServiceImpl implements BookService {

	@Autowired
	BookDao bookDao; // 미리 생성해놓은 객체를 연결시킴

	@Override
	public String create(Map<String, Object> map) {
		// affectRowCount 영향받는 행의 수, 즉 데이터 생성이 성공하면 1, 실패하면 0
		int affectRowCount = this.bookDao.insert(map);
		if (affectRowCount == 1)
			return map.get("book_id").toString();
		return null;
	}

	@Override
	public Map<String, Object> detail(Map<String, Object> map) {
		return this.bookDao.selectDetail(map);
	}

	@Override
	public boolean edit(Map<String, Object> map) {
		int affectRowCount = this.bookDao.update(map);
		return affectRowCount == 1;

	}
	@Override  
	public boolean remove(Map<String, Object> map) {  
	int affectRowCount = this.bookDao.delete(map);  
	return affectRowCount == 1;  

	}  
	@Override  
	public List<Map<String, Object>> list(Map<String, Object> map){  
	return this.bookDao.selectList(map);  
	}  

	@Override
	public int countBookBoard(Map<String, Object> map) {
		return this.bookDao.countBookBoard(map);
	}


}
