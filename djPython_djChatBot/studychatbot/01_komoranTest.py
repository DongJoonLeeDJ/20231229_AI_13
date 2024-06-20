from konlpy.tag import Komoran

komoran = Komoran() #생성자 만든 것
text1 = "아버지가 방에 들어갑니다."
text2 = "아버지가방에 들어갑니다."
text3 = "아 기다리고 기다리던"
text4 = "아기다리고기다리던"

#형태소 추출 = 형태로 : 가장 작은 의미 단위
morphs1 = komoran.morphs(text1)
morphs2 = komoran.morphs(text2)
morphs3 = komoran.morphs(text3)
morphs4 = komoran.morphs(text4)

print(morphs1)
print(morphs2)
print(morphs3)
print(morphs4)

# 형태소와 품사 태그 추출
pos1 = komoran.pos(text1)
pos2 = komoran.pos(text2)
pos3 = komoran.pos(text3)
pos4 = komoran.pos(text4)
print(pos1)
print(pos2)
print(pos3)
print(pos4)

#명사만 추출
nouns1 = komoran.nouns(text1)
nouns2 = komoran.nouns(text2)
nouns3 = komoran.nouns(text3)
nouns4 = komoran.nouns(text4)

print(nouns1)
print(nouns2)
print(nouns3)
print(nouns4)