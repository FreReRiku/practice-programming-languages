/* knock13.c */

/* 整数値を入力させ、0から入力値まで数を1ずつ増やして表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int value = 0;

    printf("整数値を入力してください。\n");
    scanf("%d", &value);

    for (int i = 0; i < value; i++) {
        printf("%d\n", i);
    }

    return 0;
}

