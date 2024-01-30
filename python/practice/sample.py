interviews1 = ["24歳学生です", "っと,24歳です","27歳です"]
interviews2 = ['學生です', '楽聖です', '学生です']


print('じゃあまず、年齢を教えてくれるかな？\n')
a = 0
for interview1 in interviews1:
    print(str(a) +  '.' + interview1)
    a += 1

input_key = int(input('0,1,2のどれかを選ぶんだゾ\n'))

if input_key == 1:
    print('やりますねぇ！\n')
    pass
else:
    print('間違ってるゾ\n')
    print('ほんへ見て、どうぞ')
    exit()
    
print('24歳？もう働いているの？じゃ')
a = 0
for interview2 in interviews2:
    print(str(a) +  '.' + interview2)
    a += 1
print('\n')

input_key = int(input('0,1,2のどれかを選ぶんだゾ\n'))

if input_key == 2:
    print('やりますねぇ！\n')
    pass
else:
    print('間違ってるゾ\n')
    print('ほんへ見て、どうぞ')
    exit()

