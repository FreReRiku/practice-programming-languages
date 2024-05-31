/* sample4.c */

/* 正確にはブロック内
 * これまで、ローカル変数の寿命を関数内と説明しましたが、
 * 正確にはブロック内です。
 * 以前にも説明しましたように、
 * ブロックとは{}で囲まれている範囲のことを指しています。
 * これまでは、if文やfor文と一緒に使用してきましたが、
 * 次のプログラムのように、それらの文に関係なく、
 * 関数内でブロックだけを使うことも可能です。
 */

#include <stdio.h>

int main(void)
{
    int value1 = 10;
    int value2 = 20;

    printf("1: value1 is %d\n", value1);
    printf("1: value2 is %d\n", value2);

    {
        printf("2: value2 is %d\n", value2);    /* このときのvalue2は前に宣言した変数とその変数値がそのまま引き継がれる。 */
        int value1; /* 上記のvalue1とは別物として扱われる */
        value1 = 30;
        value2 = 40;
        printf("2: value1 is %d\n", value1);
        printf("2: value2 is %d\n", value2);
    }

    printf("3: value1 is %d\n", value1);
    printf("3: value2 is %d\n", value2);    /* これはブロック内での変更 value2 = 40 がそのまま引き継がれる。 */

    return 0;
}

/*
 * 注目部分は2つあります。

 * 1つは、意図的に作った2つ目のブロックで、再びvalue1を宣言することができ、
 * しかも、それが別の変数として扱われていることです。
 * 2回目にvalue1が30だったのに、ブロックを抜けると10であることからもわかります。
 * 
 * もう一つは、意図的に作ったブロックの中でもvalue2が使えることです。
 * value2はブロック中で変更した結果が、3回目の表示にも残っています。
 * 
 * if文やfor文の{}もブロックなので、同じ挙動になります。
 */
