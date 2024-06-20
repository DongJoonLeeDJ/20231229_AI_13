#오늘 [1,0,0], 날짜[0,1,0], 구름[0,0,1]
from konlpy.tag import Komoran #문장 토크나이징에 필요
import numpy as np #행렬 계산 때문에 필요

kom = Komoran()
text = "오늘 날씨는 구름이 많아요"

nouns = kom.nouns(text) #명사만 추출
print(nouns) #['오늘', '날씨', '구름']

#단어 사전을 구축하고 단어별로 인덱스를 부여
#즉 원 핫 인코딩 수행 준비 작업
dics = {}
#'오늘' : 0, '날씨' : 1, '구름':2
#키 : 오늘, 값 : 0 이런식으로 작업을 할 것
for item in nouns: #['오늘', '날씨', '구름']
    if item not in dics.keys():
        dics[item] = len(dics)
print(dics) # {'오늘': 0, '날씨': 1, '구름': 2}

#원 핫 인코딩을 생성하는 부분
one_hot_length = len(dics)
print(one_hot_length) #3
targets = list(dics.values())
print(targets) #[0,1,2]
print(list(dics.keys())) # ['오늘', '날씨', '구름']
one_hot_targets = (np.eye(one_hot_length))[targets]
#numpy에 있는 eye 함수 이용해서 단위 행렬을 만듦
print(one_hot_targets) #완성된 핫 인코딩
'''
핫 인코딩 최종 완성본
[[1. 0. 0.]
 [0. 1. 0.]
 [0. 0. 1.]]
'''