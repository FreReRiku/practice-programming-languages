/* knock31.c */

/* 整数値を入力させ、その個数だけ*を、5個おきに空白（スペース）を入れて表示するプログラムを作成せよ。入力値が0以下の値の場合は何も書かなくてよい。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    for (int i = 0; i < input_number; i++) {
        if (i % 5 == 0 && i != 0) {
            printf(" ");
        }
        printf("*");
    }

    printf("\n");

    return 0;
}

