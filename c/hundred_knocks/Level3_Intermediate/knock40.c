/* knock40.c */

/* 整数値を入力させ、その値が偶数ならばeven、奇数ならばoddと表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number == 0) {
        return 1;
    } else if (input_number % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    return 0;
}

