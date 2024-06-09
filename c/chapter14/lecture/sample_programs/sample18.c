/* sample18.c */

/* sample17.cのつづき
 * 先ほどのプログラムではwhile文を用いて文字数をカウントしましたが、
 * 文字列の文字数を数えるために毎回for文を書くのは面倒です。
 * そのため、文字列の文字数を数えるstrlen関数が用意されています。
 * なお、strlen関数を使うには、string.hを#includeする必要があります。
 * 
 * -ソースコード---------------------------------------
 *  変数 = strlen(文字配列);
 * ----------------------------------------------
 * 
 * 次のプログラムは、先ほどのプログラムをstrlen関数で書き直した例です。
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;

    char str[256];
    scanf("%s", str);

    i = strlen(str);

    printf("%d\n", i);

    return 0;
}

/*
 * 実行結果はsample17.cと同じです
 */
