/* sample2.c */

/* 配列の使い方 */

/* 初期値の代入
 * 配列も、今までの変数と同様に、宣言と同時に初期化できます。
 * 配列の初期化は、次のようにして行います。
 * 
 * -配列の初期化---------------------------------------
 *  型名 配列名[要素数] = {0番の数値, 1番の数値, 2番の数値, ...};
 * ----------------------------------------------
 * 
 * {}で囲んだ中に順番に「,」で区切って数値を並べます。
 * すべてを指定する必要はないので、数値の個数は、配列の要素数以下にします。
 * 配列の要素数よりも少ない場合、残りにはすべて0が代入されます。
 * 次のプログラムは、配列を初期化して表示する例です。
 */

#include <stdio.h>

int main(void)
{
    int array[10] = {42, 79, 13};

    printf("array[0] = %d\n", array[0]);
    printf("array[1] = %d\n", array[1]);
    printf("array[2] = %d\n", array[2]);
    printf("array[3] = %d\n", array[3]);
    printf("array[4] = %d\n", array[4]);

    return 0;
}

/*
 * この方法で宣言した場合、要素数を省略することができます。
 * その場合は、指定した数値の個数だけの要素数が確保されます。
 */
