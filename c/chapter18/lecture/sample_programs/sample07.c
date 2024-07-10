/* sample07.c */

/* 副作用の恐怖
 * #define疑似命令によるマクロは手軽で便利なのですが、
 * 使い方を間違えると思わぬ現象に遭遇することがあります。
 *
 * たとえば、前回の台形の面積を求めるプログラムにおいて、
 * なんらかの事情で、高さを常に+3しなければならない場合を考えてみます。
 * 次のプログラムは、そのように変更してみた例です。
 */

#include <stdio.h>

#define GET_TRAPEZOID_AREA(A, B, H) (A + B) * H / 2

int main(void)
{
    int upper;
    int lower;
    int height;
    int surface;

    printf("上底を入力してください：");
    scanf("%d", &upper);
    printf("下底を入力してください：");
    scanf("%d", &lower);
    printf("高さを入力してください：");
    scanf("%d", &height);

    surface = GET_TRAPEZOID_AREA(upper, lower, height + 3);
    printf("面積：%d\n", surface);

    return 0;
}

/*
 * 高さは+3されているので、結果は前回と同じになるはずなのですが、
 * なぜか、答えは76と表示されてしまっています。
 *
 * これは、#define疑似命令は、単なる置き換え命令でしかないため
 * surface = GET_TRAPEZOID_AREA(upper, lower, height + 3) を(A + B) * H / 2 と置き換えると、
 * (upper + lower) * height + 3 / 2 という式になってしまい、計算がおかしくなります。
 * このように、置き換えで予期しない計算結果になることをマクロの副作用と呼びます。
 *
 * これを解決する方法は2つあります。1つは、呼び出し時にかっこを付けることです。
 *
 * -ソースコード---------------------------------
 *  GET_TRAPEZOID_AREA(upper, lower, (height + 3));
 * ----------------------------------------------
 *
 * と、かっこをつけておけば先に高さに3が加わるので、正常に計算することができます。
 *
 * もう一つの方法は、マクロの方にかっこを付けておく方法です。
 * マクロで使われている置き換え部分すべてにかっこをつけ、更にマクロ全体にも付けます。
 *
 * -ソースコード---------------------------------
 * #define GET_TRAPEZOID_AREA(A, B, H) (((A) + (B)) * (H) / 2)
 * ----------------------------------------------
 *
 * このようにすれば、すべての数値にかっこが付いているので大丈夫です。
 * しかし、気を付けて使用するのは面倒ですし、うっかり忘れてしまうかもしれません。
 * その為、マクロはあんまり多様しない方が良いとされています。
 * #define疑似命令は定数の宣言にのみ使用して、数式などの計算にはできる限り関数を使用する方が良いでしょう。
 */

