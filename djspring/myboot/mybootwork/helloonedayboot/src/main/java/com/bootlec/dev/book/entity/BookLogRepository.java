package com.bootlec.dev.book.entity;

import org.springframework.data.jpa.repository.JpaRepository;

public interface BookLogRepository extends JpaRepository<BookLog, Integer> {
//당장 필요한 리포지터리 기능은 상속한 CRUDRepository에 구현되어 있으므로 JPARepository 만 상속합니다.
}
