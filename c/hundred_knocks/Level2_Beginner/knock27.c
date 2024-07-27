/* knock27.c */

/* 整数値を入力させ、1からその値までの総和を計算して表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は0と表示する。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    int sum = 0;

    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number >= 0) {
        sum = (input_number * (input_number + 1)) / 2;
    }

    printf("合計値は%dです。\n", sum);

    return 0;
}

