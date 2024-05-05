/** pointers_and_references **/

#include <iostream>

int main()
{
	/* ポインタ */
	// ポインタというのは他の整数を参照する仕組みの1つです。WindowsのショートカットやLinuxのシンボリックリンクと同じような機能です。
	
	// 変数宣言
	int a = 5;
	int * b = &a;
	// int* と書くとint型の変数を指すポインタ型となります。
	// &x というのは x を指すポインタを得るための演算です。	
	
	// 画面出力
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	/* nullptr */
	// どの変数も参照していないポインタのことをヌルポインタと呼びます。C++ではヌルポインタを表すキーワードとしてnullptrが用意されています。


    /* デリファレンス(参照解除) */
    // ポインタが指す変数の値を参照するには次のように書きます。
    // 変数からポインタ(アドレス)を得るときには&をつけ、ポインタから値を得るには*を付けます。

    // 変数宣言
    int c = 5;
    int * d = &c;
    int e = * d;

    // 画面出力
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;

    /* constポインタ */
    //ポインタ型にconstをつける場合、constの付ける位置によって意味合いが変わります。

    // case1: *の前にconstを付けると、ポインタが指し示す値を書き換えることができなくなります。
	int f = 123;
    const int * g = &f; // 左のコードを書いた後に * g = 456; と書くとエラーになる。
    // 画面出力
    std::cout << f << std::endl;
    std::cout << g << std::endl;

    // case2: *の後にconstを付けると、ポインタ自身を書き換えることができなくなります。
    int h = 123;
    int * const i = &h; // i = nullptr をしてしまうとエラーになる。
    // 画面出力
    std::cout << h << std::endl;
    std::cout << i << std::endl;

    // 併用することも可能です。
    //const int * const i = &h;

}
