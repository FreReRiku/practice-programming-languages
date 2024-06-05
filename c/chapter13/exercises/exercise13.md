# 練習問題13

## 基本知識

### 問1-1

同じ型の変数をまとめて取り扱う方法をなんと呼ぶか。

- 配列

## プログラム読取

### 問2-1

次のプログラムは何を計算しているのか、処理内容や変数名から判断して答えよ。

```c
#include <stdio.h>

int main(void)
{
    int data[] = {79, 42, 39, 79, 13, 75, 19};
    int i, sum = 0, avg;

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        sum += data[i];
    }

    avg = sum / (sizeof(data) / sizeof(data[0]));

    printf("%d\n", avg);

    return 0;
}
```

平均値を計算している。

## プログラム書取

### 問3-1

入力された10個の数値を最後から表示するプログラムを作成せよ。

```c
#include <stdio.h>

int main(void)
{
    int data[10];
    int i;

    for (i = 0; i <  10; i++) {
        printf("%d 番目の数値を入力してください: ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", data[9 - i]);
    }

    return 0;
}
```

## 記述式

### 問4-1

配列の最大の利点は何であるか、簡潔に説明せよ。

- 番号を変数で指定することで、大量の変数をまとめて扱えること。
