class Student: #이름과 나이값을 갖는 학생 클래스
    def __init__(self, n, a): #생성자
        self.name = n #name,age는 학생의 속성
        self.age = a #n과 a는 생성자에 대입되는 매개변수
    def introduce(self):
        print("이름 {}, 나이{} ".format(self.name, self.age))

s = Student('이동준',34) #인스턴스 생성한 것
s2 = Student(a=20,n='추형욱')
s.introduce() # 인스턴스 메서드 호출한 것
s2.introduce()