/* sample1.c */
// 9章 回数が決まっている繰り返し
// 繰り返しを行う文

/* 繰り返し動作 
 * コンピュータは、同じことを何回でも繰り返してくれます。
 * 必要とあれば、何万回でも何億回でも繰り返させることができます。
 * 繰り返しには、回数の決まっている繰り返しと、回数の不明な繰り返しがあります。
 * C言語では、回数の決まっている繰り返しには、for文を使用します。
 * for文は、次のような書き方で使用します。
 * -----------------------------------------------------------------
 * | for文 |
 * ---------
 * int i;
 * for (i = 1; i <= 繰り返し回数; i++) {
 *      繰り返す文;
 * }
 * -----------------------------------------------------------------
 * このiは整数型の変数であり、繰り返しの回数を数えるために使われます。
 * 当然、このiは、for文を使う前に宣言しておく必要があります。
 * 次のプログラムは、for文を使用して、「メッセージ」を10回表示する例です。
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 10; i++) {
        printf("メッセージ\n");
    }

    return 0;
}

// このプログラムを実行してみると、「メッセージ」が10回表示されていることがわかります。
