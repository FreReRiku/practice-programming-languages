/* knock41.c */

/* 整数値を入力させ、その値が一桁の自然数かそうでないか判定するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number > 0 && input_number < 10) {
        printf("%dは一桁の自然数です。\n", input_number);
    } else {
        printf("%dは一桁の自然数ではありません。\n", input_number);
    }

    return 0;
}

