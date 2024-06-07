/* sample8.c */

/* sample7.cの続き
 * 前項の方法の問題点は、初期化のときにしか使えないことです。
 * 後から文字列を代入したい場合には、1つ1つ要素に代入するしかありません。
 * 次のプログラムは、1つ1つ要素に代入する例です。
 */

#include <stdio.h>

int main(void)
{
    char str[6];
    str[0] = 'M';
    str[1] = 'A';
    str[2] = 'R';
    str[3] = 'I';
    str[4] = 'O';
    str[5] = '\0';

    printf("%s\n", str);

    return 0;
}

/*
 * 実行結果は、先ほどと同じになります。
 */
