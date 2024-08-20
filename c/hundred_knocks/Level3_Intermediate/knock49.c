/* knock49.c */

/* 九九の表を、2重の繰り返しを使って表示するプログラムを作成せよ。2重の繰り返しを使わず単に表示するだけではダメ。値の間はタブ(\t)を使って間をあけること。 */

#include <stdio.h>

int main(void)
{
    int value = 0;

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            value = i * j;
            printf("%d\t", value);
        }
        printf("\n");
    }

    return 0;
}

