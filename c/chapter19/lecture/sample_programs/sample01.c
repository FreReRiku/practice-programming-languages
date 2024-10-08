/* sample01.c */

/* 19章：動的配列 */

/* 配列を自由自在に作る */

/* 配列の欠点
 * 第13章では配列の使い方を説明しました。
 * この配列は、多量のデータの取り扱いに非常に有効な手段なのですが、
 * 実はいくつかの欠点があり、いささか実用性が低いのです。
 *
 * 配列の最大の欠点は、要素数をプログラム中で変更出来ないことです。
 * 配列を宣言する時は、要素数を定数で直接指定するしかありません。
 * 実行中にユーザーに直接入力してもらい、その値を利用するということは出来ません。
 *
 * このことは、様々な目的で動作するプログラムを作成するのに不便です。
 * たとえば、会社の社員の給料を管理するソフトを作る場合、
 * 社員の給料を記憶する配列は社員人数分以上必要になります。
 *
 * ところが、世の中には社員数人の会社から、数千人の会社まで様々です。
 * もし、要素数を10個にすると、11人以上の会社では使えませんし、
 * 逆に、要素数を1万にすると、10人の会社では残りの9990個がムダになってしまいます。
 * そのムダな分にもメモリを使用するので、メモリがムダになってしまいます。
 *
 * このように、配列の要素数は自由に変更することが出来ないため、メモリを有効利用するのが難しく、
 * 実用性に欠けているのです。
 */

/* メモリの確保
 * 前項では、配列は自由に要素数を変更出来ないため、不便であると説明しました。
 * その為、自由に配列を作るmalloc(エムアロック)関数が用意されています。
 * なお、malloc関数を使うには、<stdlib.h>を#includeする必要があります。
 * malloc関数の使い方は、次の通りです。
 *
 * -malloc関数-----------------------------------
 *  ポインタ変数 = malloc(必要なメモリのバイトサイズ);
 * ----------------------------------------------
 *
 *  返されるポインタ変数には、確保された配列の先頭アドレスが代入されるので、
 *  これに[]演算子を使用すれば、配列と同様に使うことができます。
 *
 *  malloc関数で指定できるのは、バイト単位のサイズなので、
 *  任意の要素数の配列を確保するには、sizeof演算子を使用します。
 *  なお、malloc関数で確保したメモリを、ヒープと呼ぶことがあります。
 *  また、ヒープに確保された配列を、動的配列と呼ぶことがあります。
 *
 *  なお、深刻なメモリ不足などが原因で、メモリ確保に失敗するとNULLが返されます。
 *  これをそのまま使用すると強制終了してしまうので、
 *  malloc関数の戻り値は必ずチェックする必要があります。
 *
 *  ...ですが、深刻なメモリ不足が発生している状況で、これといった対策はありません。
 *  アプリにもよりますが、NULLが返ってきてしまった場合は、諦めて強制終了するしかないと思います。
 *
 *  -キーワード----------------------------------
 *  【ヒープ】
 *  長期的に使用される大きなサイズのメモリを格納する領域。
 *  ---------------------------------------------
 *
 *  -キーワード----------------------------------
 *  【動的配列】
 *  malloc関数などを使用して、プログラムの実行中に用意された任意のサイズの配列。
 *  ---------------------------------------------
 *
 *  malloc関数によって確保されたメモリは、プログラムが終了するまで残りますが、
 *  そのメモリが不要になった場合、free(フリー)関数を使って解放します。
 *  これを忘れると、ムダなメモリが残り続けることになるため、malloc関数を使ったら、
 *  必ずfree関数を呼び出します。
 *  free関数の使い方は次の通りです。
 *
 *  -malloc関数----------------------------------
 *  free(ポインタ変数);
 *  ---------------------------------------------
 *
 *  -終了時のfree関数----------------------------
 *  free関数は必ず呼び出すと説明しましたが、例外もあります。
 *  プログラムが終了する直前では、free関数を使わなくても、
 *  プログラム終了と同時にOSがメモリを解放します。
 *  しかし、free関数は常に呼び出す癖をつけておいてください。
 *  ---------------------------------------------
 *
 *  ポインタ変数には、malloc関数の戻り値を格納したポインタ変数を指定します。
 *
 *  次のプログラムは、int型の要素数10個の配列を動的に確保します。
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int * heap;

    heap = (int *)malloc(sizeof(int) * 10);
    if (heap == NULL) exit(0);

    for (int i = 0; i < 10; i++) {
        heap[i] = i;
    }

    printf("%d\n", heap[5]);

    free(heap);

    return 0;
}

/*
 * sizeof(int)によって、int型変数1つのバイト単位のサイズが求められるので、
 * それを10倍することで、int型変数10個分のメモリを確保しています。
 *
 * malloc関数が返すアドレスは、void型のポインタです。
 * この型は、どんなポインタ変数にも代入できるという型なので、
 * 本当は(int *)にキャストする必要はないのですが、
 * C++コンパイラではキャストしないとエラーが出ます。
 *
 * メモリ確保に失敗した場合は、exit関数を呼び出して強制終了します。
 * exit関数はプログラムを終了させる関数です。
 * なお、exit関数を使うには、<stdlib.h>を#includeする必要があります。
 * ちなみに、エラーによる強制終了の時はabort関数を使うこともあります。
 *
 * 確保した配列を使い終わったら、free関数を呼び出して解放します。
 *
 * -malloc関数の実態-----------------------------
 * malloc関数は、好きなように好きなサイズの動的配列を作ることができるので、
 * 非常に便利ですが、実はその仕組みは、メモリにマークをつけているだけです。
 *
 * これは、冷蔵庫に入っているお菓子に名前を書いておくのと同じことで、
 * 家族みんながその名前に従い、他人のお菓子を食べなければ問題ありませんが、
 * 勘違いによって他の人にお菓子を食べられてしまう可能性は十分にあります。
 *
 * malloc関数にも似たような性質があり、うまく使うのは意外に難しいのです。
 * したがって、プログラミングの際は、できる限り普通の配列を使うようにして、
 * どうしても必要な部分だけmalloc関数を使うようにした方が良いでしょう。
 * ----------------------------------------------
 */

