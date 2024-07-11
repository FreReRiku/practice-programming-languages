# 練習問題18

## 基本知識

### 問1-1

プログラム中に値が変更されない変数をなんと呼ぶか。

- 定数

### 問1-2

置き換え機能を利用して作られた簡易的な関数をなんと呼ぶか。

- マクロ

## プログラム読取

次のプログラムでは、マクロTRIは何のためのマクロなのか。処理内容や変数名から判断して答えよ。

```c
#include <stdio.h>

#define TRI(A, H) ((A) * (H) / 2)

int main(void)
{
    int side, high, square;

    scanf("%d, %d", &side, &high);
    printf("%d\n",TRI(side, high));

    return 0;
}
```

- 三角形の面積を求めるマクロ。

## プログラム書取

### 問3-1

練習問題11で作成した、
「西暦年で入力するとオリンピックが開かれるか表示するプログラムを作成せよ。ただし、オリンピックの開催を計算する部分は別の関数として作成せよ。」という問題を元に、さらに関数の戻り値をenum定数で返すようにしなさい。

```c
/* exercise18_3_1.c */

#include <stdio.h>

int olympic(int year);

enum {
    OLYMPIC_N,
    OLYMPIC_SUMMER,
    OLYMPIC_WINTER
};

int main(void)
{
    int year;
    int hold;

    printf("西暦年を入力してください：");
    scanf("%d", &year);

    hold = olympic(year);

    switch (hold) {
        case OLYMPIC_SUMMER:
            printf("夏季五輪\n");
            break;
        case OLYMPIC_WINTER:
            printf("冬季五輪\n");
            break;
        case OLYMPIC_N:
            printf("開催なし\n");
            break;
    }

    return 0;
}

int olympic(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return OLYMPIC_SUMMER;
        }
        return OLYMPIC_WINTER;
    } else {
        return OLYMPIC_N;
    }
}

```

## 記述式

### 問4-1

数値を直接書き込むか変数を使えば良いのにも関わらず、わざわざ定数を使うのはなぜかを説明せよ。

- 名前を付けておくことでわかりやすくなり、変更も容易になる。さらに定数は代入が出来ないため、間違って値を変更するというミスがなく、バグ等のリスクを減らすことができる。

