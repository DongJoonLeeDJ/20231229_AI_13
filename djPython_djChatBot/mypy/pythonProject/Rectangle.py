class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height
    def description(self):
        print('너비는 {}, 높이는 {}'.format(self.width,self.height))
    def getArea(self):
        return self.width*self.height
    def getAbsArea(self, w,h):
        return w*h

def helloWorld(name): #Rectangle 클래스랑 관련은 없으나 Rectangle.py파일에 있는 함수
    print(f'안녕 {name}')
