/* sample1.c */

/* 10章: 回数がわからない繰り返し */
// 回数不明ループ

/* 回数を求めるループ
 * 前章で解説したfor文は、決まった回数だけ繰り返す文でしたが、
 * それとは逆に、何回繰り返せば良いのか知りたい場合もあるでしょう。
 * このような例として、ねずみ算の計算があります。
 * 
 * -例----------------------------------------------------
 * ある小学生が、親に頼みました。「今月は1円、来月は2円、
 * 再来月は4円と、先月の倍額のおこずかいをちょうだい」さて、
 * 親が払う金額が100万円を超えるのは何ヶ月目でしょうか。
 * -------------------------------------------------------
 * 
 * この計算自体は、数学的に求めることも可能なのですが
 * 今回は、ループを使って計算してみることにします。
 * for文を使って求めることもできますが、このような場合には、
 * for文よりもwhile(ホワイル)文が適しています。
 * while文は、一般に次のような書き方で使用します。
 * 
 * -while文-----------------------------------------------
 * 
 * while (条件式) {
 *      繰り返す文;
 * }
 * 
 * ------------------------------------------------------
 * これを見ていただくとわかりますが、要するに、
 * for文で条件式しか指定しない場合と同じことなのです。
 * for文では、初期化と更新が使えるので、定数回ループが簡単に書けるのですが、
 * ループの回数がわからない場合は、条件式だけのwhile文が便利です。
 * 
 * 先程の計算をwhile文で行うには、
 * while文の条件に100万円より少ない間は繰り返しを続けるよう指定し、
 * 繰り返し文の中でお金を倍々にしていけばよいのです。
 * 次のプログラムは、これを計算する例です。
 */

#include <stdio.h>

int main(void)
{
    int money = 1;
    int month = 1;

    while (money <= 1000000) {
        printf("%02d 月目： %7d 円\n", month, money);
        money *= 2;
        month++;
    }

    printf("%02d 月目に %7d円となり、100万円を超える。\n", month, money);

    return 0;
}

/*
 * 上記のプログラムではmoneyをint型にしているが、
 * 参考にしている苦Cのページではdouble型で計算している。
 * double型で計算しているのは16ビットコンパイラのLSI-C86では、
 * int型では百万を記憶できないためだそうです。
 * そのほかのコンパイラでは問題ないので、各自でint型に直してみてください。
 * 
 * -long型------------------------------------------------
 * int型よりもサイズの大きいlong(ロング型)を使えば扱えますが、
 * 例題のプログラム程度では、long型を必要とすることはあまりないので、
 * long型についての説明は後回しといたします。
 * ------------------------------------------------------
 * 
 * このプログラムのポイントは、条件の部分にあります。
 * 条件として、money < 1000000 を指定しています。
 * while文は、この条件が真の間、つまり、金が100万円より小さい間は
 * 繰り返し文の money *= 2 の文を実行し続けます。
 * そして、金が100万円を超えたときに繰り返しを終了します。
 * そして、最後のprintf文で、100万円を超えたことを表示します。
 * 
 * この様に、for文でもwhile文でも、
 * 条件に指定した変数を変化させながら繰り返す点では共通しています。
 * そうしないと、条件が同じままなので、無限ループになってしまいます。
 */
