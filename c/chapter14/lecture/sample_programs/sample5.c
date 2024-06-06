/* sample5.c */

/* sample4.c の続き
 * また、これらの機能は関数化されており、次の関数が使えます。
 * なお、これらの関数の使用には、ctype.hを#includeする必要があります。
 * 
 *  名前    | 文字種類  | 文字一覧
 * -------------------------------------------------------------
 * isalnum | 英数字      | A~Z a~z 0~9
 * isdigit | 10進数     | 0~9
 * isxdigit| 16進数     | A~F a~z 0~9
 * isalpha | 英字       | A~Z a~z
 * isupper | 英大文字    | A~Z
 * islower | 英小文字    | a~z
 * ispunct | 記号       | !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
 * isspace | スペース    | 0x09~0x0D 0x20
 * 
 * 次のプログラムは、isdigit関数を使って先ほどのプログラムを書き換えた例です。
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = 'A';
    int suuti;

    /* 判定部分 */
    if (isdigit(c)) {
        suuti = c - '0';
    } else {
        suuti = 0;
    }

    printf("%d\n", suuti);
    return 0;
}

/*
 * 実行結果は先ほどとまったく同じになります。
 */
