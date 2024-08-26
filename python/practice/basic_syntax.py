# basic_syntax.py

# 数について

print(2 + 2)
print(50 - 5*6)
print(50 - 5*6 / 4)
print(8 / 5) # division ALWAYS returns a floating-point number

# 整数はint型であり、小数部を持つ数はfloat型です。
# 除算は常に浮動小数点数を返します。//演算子は整数除算を行い、"整数値"を返します。
# 剰余は、%で求めます。

print(17 / 3) # classic division returns a float
print(17 // 3) # floor division discards the fractional part
print(17 % 3) # the % operator returns the remainder of the division
print(5 * 3 + 2) # represents a floored quotient * divisior + remainder

# Pythonでは、冪乗を計算するのに**演算子が使えます。
print(5 ** 2)
print(2 ** 7)

# 統合(=)は変数に値を代入する時に使います。代入を行っても、結果は出力されず、次の入力プロンプトが表示されます。
width = 20
height = 5 * 9
print(width * height)

# 変数が"定義"されていない場合、(つまり、値が代入されていない)場合、その変数を使おうとするとエラーが発生します。

# 浮動小数点を完全にサポートしています。演算対象の値(オペランド)に複数の型が入り混じっている場合、演算子はオペランドを浮動小数点型に変換します。
print(4 * 3.75 - 1)

# 対話モードでは、最後に表示された結果は変数に_に代入されます。このことを利用すると、Pythonを電卓として使うときに、計算を連続し行う作業が多少楽になります。以下に例を示します。

'''
tax = 12.5 / 100
price = 100.50
price * tax
price + _
round(_, 2)
'''

# round関数
n = 0.123456
m = round(n)
print(m)

m = round(n, 2) # 第1引数は丸めたい数値, 第2引数は小数点以下第x位(10^-xの桁)で丸めるかの指定
print(m) # 0.12

# テキスト
# Pythonは数値だけでなくテキスト(いわゆる「文字列」であるstr型によって表現されます)を扱うことができます。
# 文字列はシングルクォート('...')または("...")で囲み、どちらを使っても違いはありません。

# クォートの中でクォートを使いたい場合、\を前に付け加えることで「エスケープ」する必要があります。もしくは、文字列で使用したいクォートとは別の方のクォートで囲むこともできます。

print('doesn\'t') # use \' to the single quote...
print("doesn't") # ...or use double quotes instead
print('"Yes," they said.')
print('"\"Yes,\" they said.')
print('"Isn\'t," they said.')

# Pythonシェルでは、文字列を定義するときと文字列が出力されるときでは見え方が異なることがあります。
# print()関数を使うと、両端のクォートがなくなり、エスケープされた文字や特殊文字が表示されるため、より読みやすい形で出力できます。

s = 'First line.\nSecond line.' # \n means newline
# >>> s # without print(), special characters are included in the string
print(s) # with print(), special characters are interpreted, so \n produces new line

# \に続く文字を特殊文字として解釈されたくない場合は、最初の引用符の前にrを就けたraw strings が使えます。
print('C:\some\name') # here \n means newline!
# C:\some
# ame
print(r'C:\some\name') # note the r before the quote

# raw文字列には微妙な面があります：raw文字列は奇数個の引用符文字(' or ")では終了できません。
# 文字列リテラルは複数行にまたがって書けます。1つの方法は三連引用符("""..."""や'''...''')を使うことです。改行文字は自動的に文字列に含まれますが、行末に\をつけることで含めないようにすることもできます。

print("""\
Usage: thingy[OPTIONS]
      -h                Display this usage message
      -H hostname       Hostname to connect to
""")

# 文字列は+演算子で連結させる(くっつけて一つにする)ことができ、*演算子で反復させることができます。
print(3 * 'un' + 'ium')

# 連続して並んでいる複数の文字列リテラル(つまり、引用符に囲われた文字列)は、自動的に連結されます。
print('Py' 'thon')

# この機能は、長い文字列を改行したいときにとても役立ちます。
text = ('Put several strings within parentheses '
        'to have them joined together.')

print(text)

# [注意]これは2つのリテラルどうしに対してのみ働き、変数や式には働きません。
# 変数どうしや変数とリテラルを連結したい場合は、+を使ってください。
prefix = 'Py'
print(prefix + 'thon')

# 文字列はインデックス(添字)を指定して文字を取得できます。最初の文字のインデックスは0になります。文字を表す、専用のデータ型は用意されていません(C言語でいうところのchar型)。文字とは、単に長さが1の文字列です。

word = 'Python'
print(word[0]) # character in position 0
print(word[5]) # character in position 5

# インデックスには、負の値も指定できます。この場合、右から数えていきます。
print(word[-1]) # last character
print(word[-2]) # second-last character
print(word[-6])

# -0と0と区別できないので、負のインデックスは-1から始まります。

# インデックス表記に加え、スライスもサポートされています。
# インデックス表記は個々の文字を取得するのに使いますが、スライスを使うと部分文字列を取得することができます。
print(word[0:2]) # characters from position 0 (included) to 2 (excluded)
print(word[2:5]) # characters from position 2 (included) to 5 (excluded)

# スライスのインデックスには、便利なデフォルト値があります; 最初のインデックスを省略すると、0とみなされます。2番目のインデックスを省略すると、スライスする文字列のサイズとみなされます。

print(word[:2])  # characters from the beginning to to position 2 (excluded)
print(word[4:])  # characters from position 4 (included) to the end
print(word[-2:]) # characters from the second-last (included) to the end

