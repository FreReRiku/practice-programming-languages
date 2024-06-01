/* sample5.c */
/* 最後まで生き残る関数 */

/* グローバル変数の寿命
 * 前章では、関数内で宣言した変数は関数内で寿命が尽きることを説明しました。
 * それならば、関数外ではどうなのか、と考えるのが自然の成り行きです。
 * 
 * 今までは、全ての変数を関数内で宣言してきたのですが
 * 実は関数外でも宣言できます。
 * 関数外で宣言された変数のことを、グローバル変数と呼ぶことがあります。
 * 
 * -キーワード----------------------------------------
 *  【グローバル変数】
 *  関数外で宣言された変数。
 *  プログラム全体が終了するまで生き残り続け、
 *  宣言されたソースファイル内のすべての関数から使用できる。
 * ----------------------------------------------
 * 
 * 次のプログラムは、グローバル変数を使った例です。
 */

#include <stdio.h>

int count;  /* グローバル変数 */

int countfunc(void);

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n", count);
    return count;
}

/*
 * このプログラムの実行結果は、次の通りになります。
 * 
 * -実行結果-----------------------------------------
 * 1
 * 2
 * 3
 * ----------------------------------------------
 * 
 * 前章のときとは異なり、今回は見事に関数を呼び出した回数が
 * 数えられています。
 * これには、グローバル変数の寿命が深く関係しています。
 * グローバル変数の場合、プログラムの最後まで生き残ります。
 * したがって、変数が何度も呼ばれた場合でも、以前の数値を記憶しているのです。
 * 
 * ところで、上記のプログラムで変数countは初期化していないにもかかわらず、
 * きれいに1, 2, 3と出力されましたが、これは偶然ではありません。
 * グローバル変数は、プログラムの開始時に
 * 自動的に0に初期化されるのです。
 * 
 * ローカル変数は関数の呼び出しのたびに作られるので、
 * そのたびに初期化していると無駄になるため、自動的には初期化されません。
 * 
 * 一方で、グローバル変数は最初に1回だけ初期化すればよいのです。
 */