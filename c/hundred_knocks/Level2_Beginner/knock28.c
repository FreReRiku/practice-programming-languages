/* knock28.c */

/* 整数値を入力させ、その値の階乗を表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は1と表示する。 */

#include <stdio.h>

int main(void)
{
    int input_number = 0;
    int sum = 1;
    printf(" 整数値を入力してください：");
    scanf("%d", &input_number);

    if (input_number > 0) {
        for (int i = input_number; i > 0; i--) {
            sum *= i;
        }
    } else if (input_number < 0) {
        printf("負の値は計算できません、もう一度実行し直してください。\n");
        return 1;
    }

    printf("合計値は%dです。\n", sum);

    return 0;
}

