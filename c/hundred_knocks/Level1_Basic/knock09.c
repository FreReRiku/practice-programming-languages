/* knock09.c */

/* No.09: 整数値を入力させ、値が正であればpositive、負であればnegative、0であればzeroと表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input = 0;

    printf("整数値を入力してください。\n");
    scanf("%d", &input);

    if (input > 0) {
        printf("positive\n");
    } else if (input == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}

