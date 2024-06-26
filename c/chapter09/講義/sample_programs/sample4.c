/* sample4.c */

/* 初期化と条件
 * 前節では、for文で繰り返し(ループ)が実現できることを説明しました。
 * ここでは、そのfor文の動作の仕組みを詳しく説明します。
 * より具体的なfor文の使い方は、次のようになります。
 * -------------------------------------------------------
 * |for文|
 * ------
 * 
 * for (初期化; 条件式; 更新) {
 *      繰り返す文;
 * }
 * -------------------------------------------------------
 * ・初期化
 * 初期化とは、カウント変数の初期化を行うための文です。
 * ここに書かれた文は最初に1回だけ実行されます。
 * 
 * ・条件式
 * 条件式とは、ループの終了条件を設定するための文です。
 * ここに書かれた式の値が真の間は繰り返す文を実行し続けます。
 * 
 * ・更新
 * 更新とは、カウント変数の更新を行うための文です。
 * ここに書かれた式は、繰り返しを行う文を実行した後に実行されます。
 * 
 * これを元にして、前節で作成したプログラムの動作を調べてみます。
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 10; i++) {
        printf("メッセージ\n");
    }

    return 0;
}

/*
 * ここでは、初期化の式が i = 1 となっています。
 * この式は最初に1回だけ実行されるので、ループの開始時点におけるiの値は1となります。
 * 
 * 次に、条件式の比較を行います。
 * この段階ではiの値は1のままなので、i <= 10 の結果は真となります。
 * その結果、ループは実行を続けることになります。
 * 
 * 次に、繰り返す文を実行します。
 * ここではprintf文が実行されます。
 * 
 * 次に、更新の式が実行されます。
 * それまでiの値は1でしたが、この更新の式はi++となっていますから、iの値が1増加して2になります。
 * 
 * この、「条件式→繰り返す文→更新」という実行を何度も繰り返して、
 * iが11になった時、 i <= 10 の条件が偽となりループから抜け出すことになります。
 * 
 * このように、カウント変数の値を変化させながら、条件が偽になるまで繰り返すことで
 * 決まった回数のループ処理を実現させているのです。
 * 
 * for文では、初期化・条件式・更新の部分にどんな式を置いても構いません。
 * 1回ごとに1ずつ減らしたり、あるいは無関係の式でも構いません。
 * しかし、決まった回数のループの実現には、前節のような式が1番使いやすいです。
 */
