/* sample13.c */

/* 配列型の引数
 * これまでは取り扱ってきませんでしたが、配列を引数にすることもできます。
 * しかし、配列の場合、通常の引数とは異なる性質が多く、扱いにくくなります。
 * とりあえず、今まで通りの方法で配列型の引数を持つ関数を作ってみます。
 * 
 * 引数はint型で要素10の配列とし、配列に代入された値の平均を求める関数を作ります。
 * 今まで通りの方法で実装すると、次のとおりになります。
 */

#include <stdio.h>

int getaverage(int data[10]);

int main(void)
{
    int average;
    int array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };

    average = getaverage(array);

    printf("%d\n", average);
    return 0;
}

int getaverage(int data[10])
{
    int i;
    int sum = 0;
    int average = 0;
    for (i = 0; i < 10; i++) {
        sum += data[i];
    }
    average = sum / 10;

    return average;
}

/*
 * 関数内では、配列の要素番号0~9までの値を変数に加算して、
 * 最後にその結果を10で割って平均値を求めています。
 * 
 * このように、一見すると配列も引数として渡せるように見えます。
 */
