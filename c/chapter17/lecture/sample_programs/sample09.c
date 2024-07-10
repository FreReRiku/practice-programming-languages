/* sample09.c */

/* ファイルからの読み込み
 * ファイルの数値を直接読み込むには、fread関数を使用します。
 * fread関数の使い方は、次の通りです。
 *
 * -fread関数------------------------------------
 *  fread(読み込む変数のポインタ, 1項目のサイズ, 項目数, ファイルポインタ);
 * ----------------------------------------------
 *
 * これを見ると、使い方はfwrite関数と同じであることがわかります。
 * 次のプログラムは、test.datファイルから、int型の数値を読み込みます。
 */

#include <stdio.h>

int main(void)
{
    int buf;
    FILE * file;

    file = fopen("test.dat", "rb");
    fread(&buf, sizeof(buf), 1, file);
    fclose(file);

    printf("%d\n", buf);

    return 0;
}

/*
 * fwrite関数と同様にして、配列を読み込むこともできます。
 *
 * -バイナリファイルとテキストファイルの使い分け-
 * バイナリファイルの利点は、読み書きが高速で、ファイルサイズが少なくなることです。
 * したがって、画像、動画、音など、なるべく高速に扱いたいファイルは、基本的にバイナリファイルです。
 *
 * それに対して、テキストファイルの利点は、人間が編集しやすいことです。
 * 困ったときには、テキストファイルにしておけば、なにかと扱いやすくて重宝します。
 * ----------------------------------------------
 */
