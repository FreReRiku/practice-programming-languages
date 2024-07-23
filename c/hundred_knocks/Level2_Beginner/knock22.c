/* knock22.c */

/*  整数値を入力させ、その値が-10以下、または、10以上であればOKと表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number <= -10 || input_number >= 10) {
        printf("OK\n");
    }

    return 0;
}

