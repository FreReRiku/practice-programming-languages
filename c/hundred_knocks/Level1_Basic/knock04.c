/*
* No.04 入力と計算
* 整数値を入力させ、その入力値を3倍した計算結果を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void)
{
    int input_number;
    int tripled_number;

    printf("input number: ");
    scanf("%d", &input_number);

    tripled_number = input_number * 3;
    printf("answer = %d\n", tripled_number);

    return 0;
}
