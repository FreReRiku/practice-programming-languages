/* knock17.c */

/* 要素数10の整数型の配列を宣言し、i番目の要素の初期値をiとし、順に値を表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < count; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

