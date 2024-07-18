/* knock15.c */

/* 整数値を入力させ、0から入力値を超えない値まで2ずつ増やして表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    for (int i = 0; i < input_number; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

