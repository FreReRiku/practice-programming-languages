/* sample02.c */

/* ファイルへの書き込み
 * ファイルへテキストを書き込む関数は、多くの種類が用意されています。
 * その中に、馴染みのあるprintf関数と良く似た、fprintf関数があります。
 * fprintf関数の使い方は、次の通りです。
 *
 * -fprintf関数----------------------------------
 *  fprintf(ファイルポインタ, 書き込み文字列, 変数...);
 * -----------------------------------------------
 *
 * 使い方は、ファイルポインタを指定すること以外、printf関数とまったく同じですが、
 * 指定した文字列は、画面ではなくファイルに書き込まれます。
 * 次のプログラムは、text.txtファイルに Hello,world の文字列を書き込みます。
 */

#include <stdio.h>

int main(void)
{
    FILE * file;
    file = fopen("test.txt", "w");
    fprintf(file, "Hello,world\n");
    fclose(file);

    return 0;
}

/*
 * このプログラムを実行すると、test.txtファイルの中身は次のようになります。
 * test.txtファイルは、実行ファイルと同じフォルダに作られます。
 */
