from gensim.models import Word2Vec
from konlpy.tag import Komoran

def read_data(filename):
    with open(filename, 'r', encoding='UTF-8') as f:
        data = [line.split('\t') for line in f.read().splitlines()]
        data = data[1:] # 맨 윗 부분 제거
    return data

# 말뭉치 : 학습에 필요한 텍스트
print('1. 말뭉치 데이터 읽기 시작')
review_data = read_data('./ratings.txt')
print('2. 형태소에서 명사만 추출')
komoran = Komoran()
docs = [komoran.nouns(sentence[1]) for sentence in review_data]
print('3. word2Vec 모델 학습')
# 하이퍼 파라미터들. 머신러닝 or 딥러닝에서 사용자가 지정해야 하는 값들
#scipy를 1.13이 아니라 1.12로 바꿔야 하고
#size 대신 vector_size로 바꿔야 함
#install 한 번에 많이 누르지 말아야 함;;
model = Word2Vec(sentences=docs, vector_size=200, window=4, min_count=2, sg=1)
print('4. 학습된 모델 저장')
model.save('nvmc.model')