# 練習問題15

## 基本知識

### 問1-1

変数に付けられたメモリ上の番号のことをなんと呼ぶか。

- アドレス

### 問1-2

上記の番号を変数に代入して扱う方法のことをなんと呼ぶか。

- ポインタ

## プログラム読取

### 問2-1

次のプログラムでは、sum関数の戻り値はvoid型であるにもかかわらず、計算結果を返すことができるのはなぜか簡潔に説明せよ。

```c
#include <stdio.h>

void sum(int, int, int *);

int main(void)
{
    int value;
    sum(50, 100, &value);
    printf("%d\n", value);
    return 0;
}

void sum(int min, int max, int *ans)
{
    *ans = (min + max) * (max - min + 1) / 2;
    return;
}
```

sum関数の3つ目の引数がポインタ型の変数として宣言されており、
これにアドレスを渡すことで変数の中身を直接書き換えられるため。

## プログラム書取

### 問3-1

0~100の範囲で入力された複数の数値の中から、最大値と最小値を求めて表示するプログラムを作成せよ。

-1が入力された場合は入力の終わりと判定する。
ただし、最大値と最小値はmain関数以外の一つの関数の中で求める。
また、入力された数値を記憶する配列の要素数は10とし、
それ以上入力された場合はエラーが起きても仕方ないこととする。

ヒント: 配列の中に-1があればデータの終わりだと判断できる。
ヒント: 最小値を探すには、最大値を記憶した変数との比較を繰り返せば良い。

```c
#include <stdio.h>

int maxmin(int[], int *, int *);


int main(void)
{
    int array[10];
    int max;
    int min;

    printf("0 - 100までの数字を10個入力してください。\n");

    
    
    for (int i = 0; i < 10; ++i) {
    scanf("%d", &array[i]);
    }
    
    maxmin(array, &max, &min);
    printf("\n");
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    
    return 0;
}

int maxmin(int array[], int *max, int *min)
{
    printf("Array: ");

    /* 最初のループ実行時のみ区切り文字を出力しないように条件分岐 */
    /* 現在がループの最終回かをスマートに判別するのは難しい */
    for (int i = 0; i < 10; ++i) {
        if (i) {
            printf(", ");
        }
        printf("%d", array[i]);
    }
    printf("\n");

    /* pattern1 */
    for (int i = 0; i < 10; ++i) {
        if (array[i] == -1) { break; }
        if (!i) {
            *max = array[i];
            *min = array[i];
        }
        if (*max < array[i]) { *max = array[i]; }
        if (*min > array[i]) { *min = array[i]; }
    }
    
    /* pattern2 */
    /*for (int i = 0; i < 10 || array[i] != -1; ++i) {
        *max = (*max > array[i]) ? (*max) : (array[i]);
        *min = (*min < array[i]) ? (*min) : (array[i]);
    }*/

    return 0;
}

```

## 記述式

### 問4-1

結局のところ、ポインタとは何なのか簡潔に説明せよ。

- ある変数のショートカット変数のこと。
