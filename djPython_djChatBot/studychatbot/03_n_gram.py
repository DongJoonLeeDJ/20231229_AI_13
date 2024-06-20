from konlpy.tag import Komoran

#어절 단위로 n-gram 만드는 함수
#bow : 원본, num_gram : gram수(2gram 등...)
def word_ngram(bow, num_gram):
    text = tuple(bow) #원본을 튜플 형태로 바꿈 (6월, 뉴턴...)
    ngrams = [text[x:x+num_gram] for x in range(0,len(text))]
    return tuple(ngrams)
#유사도 계산 함수
def similarity(doc1, doc2):
    cnt = 0
    for token in doc1:
        if token in doc2:
            cnt = cnt + 1
    return cnt/len(doc1)

s1 = '6월에 뉴턴은 선생님의 제안으로 트리니티에 입학하였다'
s2 = '6월에 뉴턴은 선생님의 제안으로 대학교에 입학하였다'
s3 = '6월에 뉴트리아는 선생님의 제안으로 사냥을 시작하였다'

kom = Komoran()
bow1 = kom.nouns(s1)
bow2 = kom.nouns(s2)
bow3 = kom.nouns(s3)

doc1 = word_ngram(bow1,2)
doc2 = word_ngram(bow2,2)
doc3 = word_ngram(bow3,2)

print(similarity(doc1,doc2))
print(similarity(doc1,doc3))
print(similarity(doc2,doc3))