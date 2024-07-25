/* knock23.c */

/* 整数値を入力させ、その値が-5以上10未満であればOK、そうでなければNGと表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number >= -5 && input_number < 10) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}

