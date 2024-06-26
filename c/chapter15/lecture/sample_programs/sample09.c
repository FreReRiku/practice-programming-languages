/* sample9.c */

/* ポインタ変数を使ってみる */

/* ポインタ変数の宣言
 * 前節では、3種類のポインタに関する説明を行いましたので、
 * ここでは、実際にポインタ変数を宣言して、感覚をつかんでみたいと思います。
 * 
 * と言うわけで、早速ポインタ変数を宣言する例を示したいのですが、
 * 実は、これがまたやっかいなシロモノだったりするのです。
 * とりあえず、intへのポインタ型の変数を宣言する例を2つ示します。
 * 
 * -ソースコード---------------------------------------
 * int *p;
 * int* p;
 * ----------------------------------------------
 * 
 * これが、多くの入門書で紹介されている、ポインタ変数の宣言の書き方です。
 * この2つは、pという名前のintへのポインタ型の変数を宣言する書き方です。
 * 
 * 1つ目の書き方は*pという名前のようですが、*はポインタ型を意味する記号で、
 * 実際には、int型変数のアドレスを記憶するpという変数を宣言しています。
 * 
 * それならば、型名に*のつく2つ目の宣言の方が読みやすくも思えるのですが、
 * 2つ以上の変数を宣言すると、2つ目以降は見かけの型名と違ってしまいます。
 * 次の例では、2つ目のp2は、普通のint型変数になってしまいます。
 * 
 * -ソースコード---------------------------------------
 * int* p1, p2;
 * ----------------------------------------------
 * 
 * どちらの書き方でも非常にわかりにくいという、大変困った問題なのですが、
 * とりあえず、ここでは1つ目の書き方で統一することにしましょう。
 * つまり、変数名の前に*をつければ(int *p1, *p2 のようにすれば)、ポインタ変数を宣言できるのです。
 * この時、*がついていても、変数名はあくまでもpになります。
 */

/* アドレスを代入する
 * 前節で説明した通り、ポインタ変数とは、アドレスを代入する変数です。
 * ポインタ変数の宣言の次は、早速アドレスを代入してみたいと思います。
 * ところで、アドレスを代入するのは良いとして、代入するアドレスはどうするのでしょうか。
 * 
 * 理屈の上では、そのコンピュータが搭載しているメモリの範囲内の番号であれば良さそうです。
 * たとえば、メモリ4GBのコンピュータであれば、0~42億の範囲内の数値であればなんでもOKです。
 * 電卓のような極めてシンプルなコンピュータや、ファミコンのような旧式ゲーム機の場合はそうやって使うこともできます。
 * 
 * ですが、皆さんがC言語の学習に使用しているのは、おそらく現代的なパソコンでしょう。
 * パソコンには、Windows、macOS、Linuxなどのオペレーティングシステム(OS)が搭載されており、
 * これが仮想メモリと呼ばれる仕組みによって、勝手気ままにメモリを使えないように管理しています。
 * 
 * -キーワード----------------------------------------
 *  【仮想メモリ】
 *  OSがメモリを管理して、多数のアプリに適切にメモリを振り分ける仕組みの事。
 *  多数のアプリが同時に動く環境で、個々のアプリが勝手気ままにメモリを使うと、
 *  別々のアプリが使うメモリが被ってしまい、正常に動作しなくなるので、
 *  OSが管理して、個々のアプリが使うメモリが被らないようにしている。
 * ----------------------------------------------
 * 
 * したがって、テキトウなアドレス番号では、OSによって管理されているアドレス番号にならないため
 * テキトウなアドレス番号を代入したポインタ変数を使うと、OSにより異常動作だと判定されて強制終了してしまいます。
 * ポインタ変数には、OSによって管理されたアドレス番号を代入する必要があります。
 * 
 * 実は、正常に管理されたアドレス番号を代入する、簡単で確実な方法があります。
 * 方法は簡単なことで、もう一つ別の変数を宣言し、そのアドレスを代入する方法です。
 * 宣言された変数は、OSによって管理されたメモリ領域に作られているため、問題なく使用できるのです。
 * 次のプログラムは、ポインタ変数pに変数iのアドレスを代入する例です。
 */

int main(void)
{
    int *p;
    int i;

    p = &i;

    return 0;
}

/*
 * まず、変数名の前に*をつけるとポインタ変数として宣言できるのだから、
 * 変数名の前に*の付いていないiは普通の変数であることを理解してください。
 * 
 * この例では、&演算子で変数iのアドレスを求めてポインタ変数pに代入しています。
 * つまり、この段階で、ポインタ変数pにはiのアドレスが入っています。
 * ということは、iのアドレスとポインタ変数pの中身は、当然同じになるはずです。
 */