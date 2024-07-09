/* sample04.c */

/* ファイルからの読み込み
 * ファイルのテキストを読み込む関数にも多くの種類がありますが、
 * 馴染みのscanf関数に似たfscanf関数があります。
 * 先頭でファイルポインタを指定することを除き、使い方はscanf関数と同じです。
 *
 * scanf関数はキーボードから読み込むため、実行すると入力待ちになりましたが、
 * fscanf関数では、ファイルのテキストを先頭から読み込みます。
 * 次のプログラムは、test.txtファイルから先頭の数字を読み込んで表示します。
 */

#include <stdio.h>

int main(void)
{
    int i;
    FILE * file;
    file = fopen("test.txt", "r");
    fscanf(file, "%d", &i);
    fclose(file);
    printf("%d\n", i);

    return 0;
}

/*
 * このプログラムの実行結果は、test.txtファイルの中身によって異なります。
 * 上記のプログラムのように、%d指定子をしようした場合、数字以外のテキストは無視されます。
 * 文字列の入力に使用する%s指定子を使用すれば文字列全体を読み込むことができます。
 * しかし、スペースなどが含まれる場合にはそこまでしか読み込まれません。
 */
