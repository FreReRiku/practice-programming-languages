/*
    sample3.cのソースコードのような変数を使えば、この章の先頭で取り上げた問題が解決する。
    つまり、10や3という数値を変数に記憶させて、その変数で計算をすれば数値を変更したくなったとしても書き換える箇所は1か所で済む。
    次のプログラムは変数を使って、四則演算の計算を行う例である。
*/

#include <stdio.h>

int main(void)
{
    // 変数の宣言
    int left;
    int right;

    // 変数に値を代入
    left = 10;
    right = 3;

    // 四則演算の計算
    printf("%d\n", left + right); // 加算
    printf("%d\n", left - right); // 減算
    printf("%d\n", left * right); // 乗算
    printf("%d\n", left / right); // 除算
    printf("%d\n", left % right); // 余り

    return 0;
}

/* sample5.cに続く */
