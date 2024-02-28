# 入力された数字が小さい順に並んでいるかどうか判定するプログラム。
# 小さい順に並んでいる場合はOK、そうなっていない場合はNGを表示する。
# ver.2


# 方針：配列を用意して、そこに値を入力していく
# 配列の長さもキーボードで入力する場合は length = int(input()) とかを書いて、for文のrangeに入れれば任意の数を入力ができるはずだ。

num_array = []
for i in range(5):
    num_array.append(int(input("input number" + str(i + 1) + ": ")))
    # print(num_array[i])

# この時点で5個の数字を入力できることを確認
# Hint: i = i + 3

def judge():

    for i in range(5 - 1):
        if num_array[i] <= num_array[i + 1]:
            print("OK")
        else:
            print("NG")
    

judge()
