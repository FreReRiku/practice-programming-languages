/* sample1.c */
/* 11章: 関数の作り方 */

/* 自作関数を作る */
/* プログラムの部品化
 * これまでで、すでにC言語の基本的な命令はほとんど解説しました。
 * これまでに作成してきた、さまざまなプログラムが思い出されます。
 * 
 * ところで、1度作ったプログラムをもう一度使いたいと思った場合、
 * 1番単純なのは、コピーしてmain関数内に貼り付けることですが、
 * プログラムが大量にあった場合には、ごっちゃごっちゃになってしまい、
 * わけのわからないプログラムになってしまうことは間違いありません。
 * 
 * 以前に作成したプログラムを再び使うことを再利用と呼び、
 * 関数として再利用することを部品化と呼びます。
 * 部品をたくさん用意しておけば、巨大なプログラムであっても、
 * その部品を組み合わせるだけで完成してしまうので、非常に効率的です。
 * 
 * -キーワード---------------------------------------------
 *  再利用
 *  以前に作成したプログラムを使うことで手間を省くこと。
 * ---------------------------------------------------
 * 
 * -キーワード---------------------------------------------
 *  単独の機能を持つ小さなプログラムをつくり、
 *  それを組み合わせることで大きなプログラムをつくる方法。
 * ---------------------------------------------------
 * 
 * ここでは、以前、4章2節3項で解説した、1~100の合計を表示するプログラムを
 * 関数化することで、手軽に部品として再利用できるようにします。
 */

/* 自作関数を作る
 * 部品化するには、1~100の合計を求めるプログラムを関数にしなくてはなりません。
 * しかし、実は、関数を作ること自体は、はじめてのことではありません。
 * 1番初めに、main関数の作り方を説明したことを覚えているでしょうか？
 * あれ以来、main関数は当然のごとく作っていたので、意識していなかったと思います。
 * 
 * 自作関数の作り方も、main関数となんら変わりません。
 * main関数の名前を変えるだけで、新しい自作の関数が作れてしまいます。
 * もちろん、その中身の処理も自由に記述できます。
 * 
 * ここまでわかれば、非常に簡単なことです。
 * 名前を変えて、中身を1~100の合計を表示するプログラムに詰め替えるだけです。
 * 新しく作成したsum関数は、次のようになります。
 */

/* 作成したプログラム part.1
 * #include <stdio.h>
 * 
 * int main(void)
 * {
 *      return 0;
 * }
 * 
 * int sum(void)
 * {
 *      printf("%d\n", (1 + 100) * 100 / 2);
 *      return 0;
 * }
 */

/*
 * これで、sum関数は完成しました。
 * 後は、sum関数の使い方さえわかれば、プログラムの再利用ができます。
 */

/* プロトタイプ宣言
 * さて、早速sum関数の使い方を説明したいところなのですが、
 * 実は、その前に、もう一つ準備して置かなければならないことがあります。
 * 
 * 先ほど、新しくsum関数を作ってみましたが、
 * 実は、これだけでは、sum関数を使うことが出来ません。
 * コンパイラは、新しくsum関数が作られていることを知らないからです。
 * 
 * 場合によっては、コンパイラに新しく作られた関数を教える必要はありません。
 * コンパイラは、新しい関数を発見すれば、自動的に認識してくれるからです。
 * ただし、新しい関数が使えるのは、その関数よりも後に発見された関数の中だけです。
 * 
 * 先の例では、まずmain関数をつくり、次にsum関数をつくりました。
 * この場合、main関数を解析している段階では、sum関数は発見されておりません。
 * したがって、main関数の中では、sum関数を使うことはできなくなってしまいます。
 * これを解決する方法の1つは、sum関数を先に書いてしまう方法です。
 * 次のプログラムはsum関数を先に書いた例です。
 */

#include <stdio.h>

int sum(void)
{
    printf("%d\n", (1 + 100) * 100 / 2);
    return 0;
}

int main(void)
{
    return 0;
}

/* sample2.c へ続く */
