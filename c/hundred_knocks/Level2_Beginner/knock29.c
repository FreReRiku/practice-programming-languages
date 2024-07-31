/* knock29.c */

/* 整数値を5回入力させ、それらの値の合計を表示するプログラムを繰り返しを使って作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    int sum = 0;
    int times = 5;          /* 入力する回数 */

    for (int i = 0; i < times; i++) {
        printf("input number: ");
        scanf("%d", &input_number);
        sum += input_number;
    }

    printf("sum = %d\n", sum);

    return 0;
}

