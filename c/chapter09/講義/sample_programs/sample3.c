/* sample3.c */

/* 膨大な回数
 * 10回表示するだけであれば、printf文を10回書いても、問題ないと思われたかもしれません。
 * しかし、実は、繰り返しの回数は、事実上無制限に指定できます。(メモリ空間が許す限り)
 * 次のプログラムは、繰り返しの回数を9999回にしてみたプログラムです。
 */

#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 9999; i++) {
        printf("%04d 回目\n", i);
    }

    return 0;
}

/*
 * 現代のコンピュータはとても性能が高いため、9999回程度の繰り返しではビクともしません。
 * 1万でも、1億でも、1兆でも、それ以上でも、好きなだけコンピュータを働かせることができます。
 */
