/* knock25.c */

/* 整数値を入力させ、その値が-10未満ならrange 1、-10以上0未満であればrange 2、0以上であればrange 3、と表示するプログラムを作成せよ。 */

#include <stdio.h>
int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number < -10) {
        printf("range 1\n");
    } else if (input_number >= -10 && input_number < 0) {
        printf("range 2\n");
    } else {
        printf("range 3\n");
    }

    return 0;
}

