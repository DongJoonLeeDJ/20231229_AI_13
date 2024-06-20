#사용자 정의 사전을 이용한 것
from konlpy.tag import Komoran
k = Komoran()
txt = '우리 챗봇은 엔엘피를 좋아해.'
p = k.pos(txt) # ('엔', 'NNB'), ('엘', 'NNP'), ('피', 'NNG')
ko = Komoran(userdic='./user_dic.tsv')
text = '우리 챗봇은 엔엘피를 좋아해.'
pos = ko.pos(text) # ('엔엘피', 'NNG')
print(p)
print(pos)