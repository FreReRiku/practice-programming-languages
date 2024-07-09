/* sample07.c */

/* ファイルへの書き込み
 * ファイルに数値を直接書き込むには、fwrite関数を使用します。
 * fwrite関数の使い方は、次の通りです。
 *
 * -fwrite関数-----------------------------------
 *  fwrite(書き込む変数アドレス, 1項目のサイズ, 項目数, ファイルポインタ);
 * ----------------------------------------------
 *
 * 書き込む数値を変数に代入しておき、その変数のアドレスを指定します。
 * 項目のサイズはsizeof演算子を使用して求めることができます。
 * 変数を書き込むだけなら、項目数はとりあえず1で構いません。
 * 次のプログラムは、test.datファイルに100という数値を書き込みます。
 */

#include <stdio.h>

int main(void)
{
    int buf = 100;
    FILE * file;
    file = fopen("test.dat", "wb");
    fwrite(&buf, sizeof(buf), 1, file);
    fclose(file);

    return 0;
}

/*
 * このプログラムを実行すると、test.datファイルに値が書き込まれますが、
 * この値は、一般的なテキストエディタで見ることは出来ません。
 * バイナリファイルを見るには、バイナリエディタが必要になります。
 *
 * バイナリエディタでは、数値を16進数で表示します。
 * その為、100という数値は64と表示されます。
 *
 * -リトルエンディアンとビッグエンディアン-------
 *  数学では、100を16進数に変換すると、0064になります。
 *  しかし、バイナリエディタで閲覧した結果では。6400となっています。
 *  これは、リトルエンディアンと呼ばれる表現です。
 *  この表現では、16進数を2桁ずつに区切り、逆の順番で保存します。
 *
 *  一方、16進数の順番通りに表現する方式を採用するCPUもあります。
 *  こちらはビッグエンディアンと呼ばれています。
 *
 *  リトルエンディアンはわかりにくく見えますが、先頭に意味がある数値が来やすいという利点があり、
 *  データ読み取り上、有利なため、
 *  現代では、リトルエンディアンが主流になっています。
 *  ---------------------------------------------
 */
