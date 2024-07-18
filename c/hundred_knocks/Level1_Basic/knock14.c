/* knock14.c */

/* 整数値を入力させ、入力値から0まで数を1ずつ減らして表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_count;
    printf("整数値を入力してください：");
    scanf("%d", &input_count);

    for (int i = 0; i <= input_count; i++) {
        printf("%d\n", input_count - i);
    }

    return 0;
}

