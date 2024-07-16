/* probability_machine.c */

/* notes:
 * どういうことしたいか
 * main関数では分母の値を整数で入力してもらう
 * 計算する部分の関数では1/入力した分母を弾いた時の回数を返す
 * 最終的にmain関数で表示して終了
 */

#include <stdio.h>

int main(void)
{
    int bottom = 0;
    int * p;
    int i = 0;

    p = &bottom;

    while (bottom <= 0) {
        if (i) {printf("不正な値が入力されました。\n");}
        printf("分母の値を入力してください。\n");
        scanf("%d", p);
        i++;
    }

    printf("入力された分母の値は%dです。\n", bottom);

    return 0;
}
