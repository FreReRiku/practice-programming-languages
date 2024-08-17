/* knock47.c */

/* 異なる整数値を2つ入力し、それぞれ別の変数に格納する。そして、それらの変数の値を入れ替えた後、それぞれの変数の値を表示するプログラムを作成せよ。単に順序を変えて表示するだけではダメ。必ず変数の値を入れ替えること。下の実行例の場合、まず変数aに2、bに5が入力された状態から、aの値が5、bの値が2になるように入れ替える。 */

#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int rev_num = 0;

    printf("1つ目の整数値を入力してください：");
    scanf("%d", &a);
    printf("2つ目の整数値を入力してください：");
    scanf("%d", &b);

    rev_num = b;
    printf("a = %d\n", rev_num);

    rev_num = a;
    printf("b = %d\n", rev_num);

    return 0;
}

