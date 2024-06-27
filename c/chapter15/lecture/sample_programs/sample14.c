/* sample14.c */

/* 配列型整数の奇妙な性質
 * 前項では、配列を引数として使う方法を説明しましたが、
 * この関数は、今までの引数では有り得なかった、奇妙な性質を持っています。
 * 
 * まず、配列の要素数は無視されてしまいます。
 * 次のプログラムは、わざと要素数5の配列を渡してみる例です。
 */

#include <stdio.h>

int getaverage(int data[10]);

int main(void)
{
    int average;
    int array[5] = { 15, 98, 98, 17, 42 };  /* 要素数が5 */
    average = getaverage(array);
    printf("%d\n", average);

    return 0;
}

int getaverage(int data[10])
{
    int i;
    int average = 0;

    for(i = 0; i < 10; i++) {
        average += data[i];
    }

    return average / 10;
}

/*
 * 引数の型は10要素になっているにも関わらず、5個しか要素のない配列が渡せます。
 * その結果、関数側では強引に10個の要素を処理してしまい、おかしな結果となっています。
 */
