# 練習問題11

## 基本知識

### 問1-1

プログラムの先頭で関数の形を宣言しておくことをなんと呼ぶか。

- プロトタイプ宣言

### 問1-2

関数に数値を渡すために宣言する変数のことをなんと呼ぶか。

- 仮引数

### 問1-3

関数に渡す数値や変数のことをなんと呼ぶか。

- 実引数

### 問1-4

関数から返す数値のことをなんと呼ぶか。

- 戻り値

## プログラム読取

次のプログラムでは、関数triは何のための関数なのか。
処理内容や変数名から判断して答えよ。

```c
#include <stdio.h>

int tri(int, int);

int main(void)
{
    int side, high, square;

    scanf("%d, %d", &side, &high);
    printf("%d\n", tri(side, high));

    return 0;
}

int tri(int side, int high)
{
    return side * high / 2;
}

```

- 三角形の面積を計算する関数

## プログラム書取

### 問3-1

西暦年を入力するとオリンピックが開かれるか表示するプログラムを作成せよ。
ただし、オリンピックの開催を計算する部分は別の関数として作成せよ。

※ notice
2000年に夏の大会が開かれ、その後は2年ごとに 冬->夏->冬->夏 の順に開かれるものとします。
また、この予定は永遠に狂わないこととします。

#### Answer

```c
#include <stdio.h>

int is_olympic_year(int);

int main(void)
{
    int year;
    int hold;

    printf("開催年を整数で入力してください：");
    scanf("%d", &year);

    hold = is_olympic_year(year);

    switch (hold) {
        case 0:
            printf("この年ではオリンピックが開かれません。\n");
            break;
        case 1:
            printf("この年では夏季オリンピックが開かれます。\n");
            break;
        case 2:
            printf("この年では冬季オリンピックが開かれます。\n");
            break;
    }

    return 0;
}

int is_olympic_year(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return 1;
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}

```

## 記述式

関数を作るのは何のためか、簡潔に説明せよ。

- 機能別に関数を作り、それを組み合わせることでプログラム全体が完成し、大きなプログラムでも作りやすくなるため。
