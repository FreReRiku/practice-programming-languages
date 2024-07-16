/* knock12.c */

/* 整数値を入力させ、その値の回数だけHello World!を繰り返して表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int count = 0;

    printf("繰り返す回数を入力してください。\n");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Hello World!\n");
    }

    return 0;
}

