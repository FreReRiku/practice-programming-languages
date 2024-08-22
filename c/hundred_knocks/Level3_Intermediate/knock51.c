/* knock51.c */

/* 指定した金額を100円玉と10円玉と1円玉だけで、できるだけ少ない枚数で支払いたい。金額を入力するとそれぞれの枚数を計算して表示するプログラムを作成せよ。*/

#include <stdio.h>

int main(void)
{
    int input_price = 0;
    int hundred_count;
    int ten_count;
    int one_count;

    printf("金額を入力してください：");
    scanf("%d", &input_price);

    for (hundred_count = 0; input_price > 99; hundred_count++) {
        input_price -= 100;
    }
    for (ten_count = 0; input_price > 9; ten_count++) {
        input_price -= 10;
    }
    for (one_count = 0; input_price > 0; one_count++) {
        input_price -= 1;
    }

    printf("100円玉：%d枚\n10円玉：%d枚\n1円玉：%d枚\n", hundred_count, ten_count, one_count);
    return 0;
}

