# import openpyxl
# wb = openpyxl.load_workbook('./weatherlocal.xlsx')
# sheet = wb['Sheet1']
# print(sheet.max_column, sheet.max_row)
# print(sheet.cell(row=1,column=1).value)
# print(sheet.cell(row=2,column=1).value)
#
# print('-'*50)
# wb.close()
# wb = openpyxl.load_workbook('./weatherlocal.xlsx')
# sheet = wb['Sheet1']
#for row in sheet.iter_rows(min_row=2):
#    for cell in row:
#        print(cell.value)

import pandas as pd
df = pd.read_excel('weatherlocal.xlsx')
loc_x = ''
loc_y = ''
for idx, item in df.iterrows():
    if(item['3단계']=='신천1.2동'):
        print(item)
        loc_x = item['격자 X']
        loc_y = item['격자 Y']
        print('loc',loc_x,loc_y)
        break
    #print(item)
    #print(idx)
    #print(item['구분'])
    #break
