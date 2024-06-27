/* sample15.c */

/* sample14.cのつづき
 * さらにおかしな現象として、関数内で配列の値を変えると呼び出し側まで変化します。
 * 次のプログラムは、関数内で配列の値を変更してみる例です。
 */

#include <stdio.h>

int getaverage(int data[10]);

int main(void)
{
    int average;
    int array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };
    
    printf("array[3] = %d\n", array[3]);
    average = getaverage(array);
    printf("array[3] = %d\n", array[3]);

    printf("Average is ... %d\n", average);
    return 0;
}

int getaverage(int data[10])
{
    int i;
    int average = 0;

    for (i = 0; i < 10; i++) {
        average += data[i];
    }
    data[3] = 111;  /* 引数の配列の値を変更 */
    
    return average / 10;
}

/*
 * 今までの引数では、呼び出された関数の中で引数の値を変更しても、
 * 呼び出し元の引数の値が変わることはありませんでしたが、
 * 配列では、なぜか、呼び出し先での変更が呼び出し元に影響しています。
 * この様なことは、値渡しではあり得ないことであるはずです。
 */
