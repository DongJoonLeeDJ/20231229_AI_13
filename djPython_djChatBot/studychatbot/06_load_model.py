from gensim.models import Word2Vec

model = Word2Vec.load('nvmc.model')

#사랑이라는 단어 임베딩
print('사랑 :',model.wv['사랑'])

#단어 유사도 계산
print('대기업 = 삼성', model.wv.similarity(w1='대기업',w2='삼성'))

# 가장 유사한 단어 추출
print(model.wv.most_similar('사랑',  topn=5))
print(model.wv.most_similar('시리즈',  topn=5))

