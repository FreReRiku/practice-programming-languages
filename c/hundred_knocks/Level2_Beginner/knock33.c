/* knock33.c */

/* 整数値を入力させ、1から9まで、入力値以外を表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    for (int i = 1; i < 10; i++) {
        if (i == input_number) {
            continue;
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}

