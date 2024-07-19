/* knock18.c */

/* 要素数10の整数型の配列を宣言し、整数値を入力させ、すべての配列の要素を入力値として、すべての要素の値を表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int array[10] = {0};
    int count = sizeof(array) / sizeof(array[0]);
    int input_number = 0;

    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    for (int i = 0; i < count; i++) {
        array[i] = input_number;
        printf("%d\n", array[i]);
    }

    return 0;
}

