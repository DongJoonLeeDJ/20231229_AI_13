import matplotlib.pyplot as plt #plt라는 이름으로 줄여서 쓴다.
#1. 빨간 줄에 마우스 올린 다음 Install Package matplotlib 클릭
#2. 왼쪽 하단에 Run 밑에 밑에 아이콘 클릭 후 matplotlib 검색 후 설치
#3. >_ 이렇게 생긴 거 누르고 pip install matplotlib 쓰기

x = [a*10 for a in range(0,11)]
print('x축',x)
y = list(range(0,11))
print('y축', y)
plt.plot(x,y)
plt.show()
