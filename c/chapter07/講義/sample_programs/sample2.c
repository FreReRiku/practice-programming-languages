/* **比較のための演算子** */

/*
 * 前節を読んだだけでは、if文はかなり使い道のない文に見えるかもしれません。
 * なにしろ、0かそうでないかの判定しかできないのですから。
 * しかし、普通の計算とif文を組み合わせれば、もっと高度な比較が可能です。
 * 例えば、値が同じ数同士を減算すると、答えは当然0になります。
 * この性質を利用すれば、引き算によって、値の判定が可能になります。
 * 次のプログラムは、その性質を利用し、入力された数が10であるかを判定します。
 */

#include <stdio.h>

int main(void)
{
    int suuti;
    scanf("%d", &suuti);
    if (suuti - 10) {
        printf("入力値は10ではありません\n");
    }
    return 0;
}

/*
 * このプログラムを実行させて10を入力してみたり、それ以外の値を入力してみたりしましょう。
 * この方法を更に複雑に応用すれば、非常に高度な比較も可能になります。
 * しかし、変数の値が10かどうかを調べるのに、減算しなければならないというのは面倒です。
 */
