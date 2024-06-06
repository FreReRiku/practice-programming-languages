/* sample3.c */

/*
 * 数字を使うときには、引き算で本来の数値を知ることもできます。
 * 数字にも文字の番号が割り当てられており、たとえば'0'は48番に割り当てられています。
 * 数字から'0'の番号を引き算すれば、数値に変換され、計算に使用できます。
 * 次のプログラムは、数字を数値に変換する例です。
 */

#include <stdio.h>

int main(void)
{
    char c = '8';           /* 数字 */
    int suuti = c - '0';    /* 数値に変換 */
    printf("%d\n", suuti);

    return 0;
}

/*
 * このプログラムでは、数値に変換した結果を%d指定子で表示させています。
 */
