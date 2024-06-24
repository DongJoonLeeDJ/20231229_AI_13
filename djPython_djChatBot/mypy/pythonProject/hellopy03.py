#모듈 : 여러 가지 함수나 클래스 등을 기능이나 목적별로 모은 파일

import Rectangle #모듈명(=Rectangle) 계속 적어야 됨
r = Rectangle.Rectangle(10,5)
print(r.getArea())
print(r.getAbsArea(11,22))
Rectangle.helloWorld('한형빈')

#모듈명 생략 가능, *대신 원하는 함수이름만 적을 수도 있음
from Rectangle import * #import 코드가 맨 위가 아니라 코드 중간에 삽입 가능
a = Rectangle(2,3)
print(a.getArea())
print(a.getAbsArea(3,4))
helloWorld('이동준')