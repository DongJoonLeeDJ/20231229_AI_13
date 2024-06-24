a = 'Hello World'
b = '''
안녕
내 이름은 이동준이야
반가워'''
print(a)
print(b)
print(a + b)
# 주석은 #을 주로 씀
c = 10
d = 50
#python은 조건문 반복문 등... 중괄호 필요없음
#딕셔너리(=객체)때만 중괄호가 필요함
if c > d:
    print('c가 더 커요')
    print('별도의 중괄호 없이도 들여쓰기 잘 되면')
    print('여러 줄 작성 가능')
elif c == d:
    print('얘네 둘이 같데요')
else:
    print("큰따옴표나 작은따옴표 모두 됨")
    print('\'이스케이프문자\'는 주의할 것')
    print("'이스케이프문자'는 주의할 것")

sum = 0
for i in range(1, 101):
    sum += i
print('1부터 100까지의 합 %d' % sum)

print('숫자 입력')
mynum = int(input())
print(mynum)

# 자신이 태어난 달을 입력하여 그 것이 봄/여름/가을/겨울인 지 출력
# 12,1,2 - 겨울, 3~5 봄, 6~8, 여름, 9~11, 가을

while True:
    print("몇 월에 태어나셨나요?")
    month = int(input())
    if month <= 0 or month > 12:
        continue
    else:
        if month == 12 or month == 1 or month == 2:
            print("겨울!")
        elif month >= 3 and month <= 5:
            print('봄!')
        elif month >= 6 and month <= 8:
            print('여름~')
        else:
            print('가을!')
        break

# cc부터 dd까지의 합을 구하 되, cc가 dd보다 크면 값을 반대로 바꿔서
#합 구하기
print('cc는?')
cc = int(input())
print('dd는?')
dd = int(input())
if cc>dd:
    temp = cc
    cc = dd
    dd = temp
sum = 0
for i in range(cc,dd+1):
    sum += i
print(sum)

# aa부터 bb까지의 합을 구하 되, 짝수만 더해서 출력
print('aa는?')
aa=int(input())
print('bb는?')
bb=int(input())
sum = 0
for i in range(aa,bb+1):
    if i%2==0:
        sum+=i
print(sum)

