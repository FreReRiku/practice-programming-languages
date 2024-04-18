/*
* scanf関数では、整数だけでなく、実数の入力も可能です。
* ただし、実数の場合、%lf指定子を使用する必要がある。
* 次のプログラムは、scanf関数を使用して入力された実数をそのまま表示するプログラムである。
*/

#include <stdio.h>

int main(void)
{
    double data;
    scanf("%lf", &data); /* 入力部分 */
    printf("%f\n", data);

    return 0;
}
