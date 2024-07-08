/* sample01.c */

/* 17章：ファイルの取り扱い */

/* テキストファイルの読み書き */

/* ファイルの取り扱い
 * 今までは、入出力を行う場合、すべて画面に表示してきました。
 * 画面に表示すれば、結果がすぐにわかって便利だからです。
 * しかし、画面に表示された結果は、プログラムが終わると消えてしまいます。
 * また、膨大な量のデータを画面に表示するのは現実的ではありません。
 * 
 * このような場合、ファイルにデータを保存するのが普通です。
 * ファイルとして保存されたデータは、ディスク上に保存されるので、
 * 消えることなく、コピーや再編集が容易です。
 * 
 * ここでは、C言語でファイルを読み書きする方法を説明します。
 */

/* ファイルの開閉
 * プログラムからファイルを操作する手順は概ね次のような順番で行われます。
 * 
 * -ファイルを操作する手順----------------------------------
 *  1. ファイルを開く
 *  2. ファイルを読み書きする
 *  3. ファイルを閉じる
 * ----------------------------------------------
 * 
 * つまり、ファイル操作には、ファイルの開閉が必須となっています。
 * そこで、C言語には、ファイルを開閉する関数が用意されています。
 * 開く関数がfopen関数、閉じる関数がfclose関数です。
 * それぞれの関数の使い方は、次の通りになります。
 * 
 * -ファイルを開閉する関数----------------------------------
 * FILE型のポインタ変数 = fopen(ファイル名, モード);
 * fclose(FILE型のポインタ変数);
 * ----------------------------------------------
 * 
 * ファイル名とは、その名の通りのファイル名です。
 * フルパスで指定することも、名前だけで指定することもできます。
 * 
 * モードとは、ファイルを開く目的を表す文字列のことです。
 * モードには、次の6種類の文字列のうち、どれか1つを指定します。
 * 
 * -モード文字列と目的------------------------------------
 *  r : 読み込み。ファイルがないときは失敗。
 *  r+: 読み込み。ファイルがないときは失敗。
 *  w : 書き込み。ファイルがあっても空のファイルを作る。
 *  w+: 読み書き。ファイルがあっても空のファイルを作る。
 *  a : 追加書き込み。ファイルがないときは作る。
 *  a+: 追加読み書き。ファイルがないときは作る。
 * ----------------------------------------------
 * 
 * FILE型は今までに出てきたことがない新しい型ですが、その正体は構造体です。
 * fopen関数を実行すると、ファイル情報を持つFILE型へのポインタが返されます。
 * 以後、このポインタは開いたファイルの識別子として使うだけなので、
 * ポインタ特有の操作を行ったり、構造体の要素を使うことはありません。
 * 慣習的に、FILE型へのポインタ変数を、ファイルポインタと呼びます。
 * 
 * ここまで説明したことがわかれば、ファイルの開閉ができます。
 * 次のプログラムは、text.txtという名前のファイルを書き込むために開く例です。
 */

#include <stdio.h>

int main(void)
{
    FILE * file;
    file = fopen("text.txt", "w");
    fclose(file);
    return 0;
}

/*
 * -fcloseの役割------------------------------------
 * 今回のプログラムだけだと、fclose関数はとくに必要ないように見えてしまいます。
 * しかし、fclose関数には重要な役割がありますので、忘れてはいけません。
 * 
 * 現代のパソコンでは、同時に複数のアプリが動作できます。
 * もし、同じファイルを同時に別々のアプリで書き換えてしまうと、
 * どちらを反映すればよいのかわからなくなってしまいます。
 * 
 * そこで、fopen関数で書き込みができるように開いたファイルには。
 * 他のソフトで書き換えられないよう、ロックしています。
 * fclose関数はロックを解除して、他のアプリから使えるようにするために必要です。
 * ----------------------------------------------
 */