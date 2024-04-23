/*
 * そこでC言語には「比較専用の演算子」が用意されています。
 * 2つの数値が等しいかどうかを調べる場合には、==演算子を使用します。
 * この演算子は2つの値が等しいときには結果が真になるという計算を行います。
 * 次のプログラムは、==演算子で入力された値が10かどうかを調べる例です。
 */

#include <stdio.h>

int main(void){
    int suuti;
    scanf("%d", &suuti);
    if (suuti == 10) {
        printf("入力値は 10 です\n");
    }
    return 0;
}

