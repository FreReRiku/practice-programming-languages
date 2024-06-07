/* sample12.c */

/* 文字列の連結
 * 文字列リテラルを連結するだけなら関数は必要ありません。
 * 文字列リテラルをただ並べるだけで連結されるからです。
 * 次のプログラムは、文字列リテラルの連結を行う例です。
 */

#include <stdio.h>

int main(void)
{
    char str[] = "DRAGON" "QUEST";
    printf("%s\n", str);

    return 0;
}
