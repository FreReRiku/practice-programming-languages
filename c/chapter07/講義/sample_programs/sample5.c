/* ** 関係演算子 **/
/*
 * 等値演算子は2つの値が等しいかどうかを調べる演算子でしたが、関係演算子は、2つの値の大小関係を調べる演算子です。
 * 次のプログラムは、入力された数が10より大きいかどうかを判定します。
 */

#include <stdio.h>

int main(void)
{
    int suuti;
    scanf("%d", &suuti);

    if (suuti == 10) {
        printf("入力値は 10 です\n");
    }
    if (suuti > 10) {
        printf("入力値は 10 より大きいです。\n");
    }
    if (suuti < 10) {
        printf("入力値は 10 より小さいです。\n");
    }

    return 0;
}
