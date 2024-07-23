/* knock21.c */

/*  整数値を入力させ、その値が5よりも大きく、かつ、20よりも小さければOKと表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number > 5 && input_number < 20) {
        printf("OK\n");
    }

    return 0;
}

