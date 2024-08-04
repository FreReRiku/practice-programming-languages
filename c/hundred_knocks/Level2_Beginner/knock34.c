/* knock34.c */

/* 整数値を入力させ、1から9まで、入力値と入力値+1以外を表示するプログラムを作成せよ。入力値が9の場合は9のみ表示しない。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;

    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    for (int i = 1; i < 10; i++) {
        if (i == input_number) {
            continue;
        } else if (i - 1 == input_number) {
            continue;
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}

