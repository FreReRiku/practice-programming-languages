# 3章 練習問題

## 基本知識

### 問1 - 1
C言語で画面に文字列を表示するのに何という関数を使うか。

### 問1 - 1 解答
printf関数

### 問1 - 2
上記の関数を使うには、コンパイラに説明書を渡さなくてはならない。<br>
そのための疑似命令と、渡す説明書のファイル名を答えよ。

### 問1 - 2 解答
疑似命令   #include
ファイル名 stdio.h

### 問1 - 3
上記の関数で文字列を表示する時に改行するには記号を書く。<br>
その記号全般のことをなんと呼ぶか。

### 問1 - 3 解答
エスケープシーケンス


## プログラム書取

### 問2 - 1
以下のプログラムを実行したときの実行結果を答えなさい。

```c:question3_1.c`
int main(void)
{
    printf("The pen is mightier\n than the sword\n");
    return 0;
    printf("Time is money\n");
}
```

### 問2 - 1 解答
The pen is mightier<br>
than the sword<br>

※point: returnで関数が終了するため、最後の文は表示されない。

## 記述式

### 問3 - 1
画面に次のように表示するプログラムを作成せよ。
なお、2つ目の文字の頭がそろえられていれば、空白の数は問わない。

Intel: Pentium4
AMD  : Athlon64

### 問3 - 1 解答
questionThree1.c に記載。

