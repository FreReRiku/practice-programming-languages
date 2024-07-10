/* sample06.c */

/* バイナリファイルの読み書き */

/* テキストとバイナリ
 * ファイルにはさまざまな種類のものがありますが、
 * もっとも基本的な区別として、
 * テキストかバイナリという違いがあります。
 *
 * すべてのファイルは本質的にはバイナリファイルです。
 * バイナリを直訳すると、2進数という意味なのですが、
 * バイナリファイルとはその名の通り、2進数で記録されたファイル、
 * 要するに、数値のみで記録されたファイルのことを意味します。
 *
 * それに対して、テキストファイルは、文字列だけが記録されたファイルです。
 * コンピュータのなかでは、文字列といえども数値で表されているので、
 * テキストファイルも、本質的にはバイナリファイルです。
 * しかし、テキストファイルは文字列で記録されているため、
 * テキストエディタなどで修正を行うことが容易です。
 *
 * バイナリファイルも、特定のエディタで閲覧・修正できますが、
 * すべてのデータが数値の固まりになっているため、
 * 中身を見ても、その意味がまったくわかりません。
 * しかし、数値を直接書き込むため、サイズが少なく高速です。
 *
 * 一般に、取り扱いを容易にする必要がある場合はテキストファイル、
 * 高速性が必要とされる場合にはバイナリファイルを利用することが多いようです。
 */

/* ファイルの開閉
 * テキストであれ、バイナリであれ、ファイル操作の基本的な手順に変わりはありません。
 * バイナリファイルも、fopen関数、fclose関数を使って開閉します。
 * ファイル名、モードの指定方法もまったく同じです。
 * ただし、バイナリファイルを開くときには、モード文字列の最後にbを付けます。
 *
 * ここまでの説明でバイナリファイルを開閉することができます。
 * 次のプログラムは、test.datという名前のファイルを書き込むために開く例です。
 */

#include <stdio.h>

int main(void)
{
    FILE * file;
    file = fopen("test.dat", "wb");
    fclose(file);

    return 0;
}

/*
 * このプログラムを実行すると、test.datという名前のファイルが作成されます。
 * 今回は開いただけなので、当然中身は空っぽです。
 *
 * -混同しても使える-----------------------------
 * 実際には、バイナリで開いてもテキストデータを読み書きできますし、
 * 逆も可能ですが、改行の扱いなどで不便な点が多くなります。
 * ----------------------------------------------
 */