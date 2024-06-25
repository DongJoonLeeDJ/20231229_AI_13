from konlpy.tag import Komoran
k = Komoran() #생성자로 인한 인스턴스 생성
text1 = '아버지가 방에 들어갑니다.'
text2 = '아버지가방에 들어갑니다.'

#형태소 추출 (형태소 : 가장 작은 의미 단위)
mor1 = k.morphs(text1)
mor2 = k.morphs(text2)
#형태소와 품사 추출
pos1 = k.pos(text1)
pos2 = k.pos(text2)
#명사만 추출
nouns1 = k.nouns(text1)
nouns2 = k.nouns(text2)
print(mor1)
print(pos1)
print(nouns1)
print(mor2)
print(pos2)
print(nouns2)