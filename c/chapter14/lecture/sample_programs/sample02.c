/* sample2.c */

/* 文字コード
 * 前項では、char型で1文字を取り扱うことができることを説明しましたが、
 * これは、コンピュータで使われる文字コードの仕組みを利用しています。
 * 
 * -キーワード----------------------------------------
 *  【文字コード】
 *  コンピューターで使われる文字に1対1で対応する番号をつけて表現する方法。
 *  ASCIIコードという規格では半角のアルファベットや記号が割り当てられている。
 *  日本語を扱えるコードとして、JIS、Shift JIS、EUC-JPが使われている他、
 *  世界中の言語を扱えるコードとしてUnicodeが普及している。
 *  
 *  ※ いま使用している文字コードはUTF-8(UCS(Universal Coded-character Set) Transformation Format 8)であり、
 *  Unicodeで定義された文字集合を表現することができる文字コード(符号化方式)の一つ。
 * 一文字を1~4バイトの可変長で表現するもので、様々な言語の文字を扱える文字コードとしては世界的に最も普及している。
 * ----------------------------------------------
 * 
 * つまり、文字コードとは、文字に1対1で対応する番号をつけて表現する方法のことです。
 * ※ どの文字がどの番号なのかは調べれば出てきますが、覚える必要はありません。
 * 
 * 重要なことは、char型に文字を代入するのは、この番号を代入しているだけのことです。
 * つまり、実のところ、char型は普通の整数型とまったく同じなのです。
 * (printf関数において、'A'を表示するための%c指定子を%dに変えると65と表示されます。)
 * 
 * たとえば、前項のプログラムでは、'A'をchar型変数cに代入しましたが、
 * これは、Aが65番に割り当てられているので、コンパイラが'A'を65と解釈し、
 * そのcが65に代入されただけのことに過ぎません。
 * 
 * また、printf関数でAが表示されたのも、変数の中身が65だったので、
 * printf関数の方でAと表示するように処理しただけのことなのです。
 * 
 * つまり、コンピュータではすべての文字は番号で表されており、
 * char型はその番号を記憶しておくに過ぎないということなのです。
 */

/* 文字に対する計算
 * char型で記憶されている文字は、実は単なる番号であることを前項で説明しましたが、
 * このことを利用すれば、文字に対して計算を行うこともできます。
 * 
 * たとえば、文字コードでは、基本的に文字の番号は順番通りに定義されています。
 * 半角アルファベットでは、Aが65、Bが66、Cが67のように決められています。
 * つまり、Aに足し算を行うと、何番目のアルファベットの文字を取り出すことができます。
 * 次のプログラムは、10番目のアルファベットを取り出す例です。
 */

#include <stdio.h>

int main(void)
{
    char c = 'A' + 9;   /* 最初は0なので9を足す。 */
    printf("%c\n", c);

    return 0;
}
