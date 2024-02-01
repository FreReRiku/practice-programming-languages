# 入力された数字が小さい順に並んでいるかどうか判定するプログラム。
# 小さい順に並んでいる場合はOK、そうなっていない場合はNGを表示する。

num1 = int(input("input number 1: "))
num2 = int(input("input number 2: "))
num3 = int(input("input number 3: "))

if num1 <= num2 and num2 <= num3:
    print("OK")
else:
    print("NG")
