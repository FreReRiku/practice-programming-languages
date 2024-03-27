/*
    すでに変数が覚えている値に直接計算することも可能である。
    以下のプログラムは、変数valueに記憶されている数値に30を加える例である。
*/

#include <stdio.h>

int main(void)
{
    int value;
    value = 10;
    value += 30; // value = value + 30 と同じ意味である。
    printf("%d\n", value);
    return 0;
}

// 実行結果 40

/* sample7.cに続く */
