/* knock16.c */

/* 整数値を入力させ、入力値が0でなければ再度入力させ、0であれば終了するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 1;

    while (input_number != 0) {
        printf("整数値を入力してください：");
        scanf("%d", &input_number);
    }

    printf("%dが入力されたので終了します。\n", input_number);

    return 0;
}

