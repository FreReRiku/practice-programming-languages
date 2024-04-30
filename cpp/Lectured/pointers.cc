#include <iostream>

int main()
{
    int x = 893;
    int * p = &x;       // intポインタ型(「int *」型)変数pはxを参照せよ

    std::cout << "x == " << x << "\n";
    std::cout << "&x == " << &x << "\n";    // 「変数xの領域開始アドレスは何か」を問うている。
    std::cout << "p == " << p << "\n";      // intポインタ型変数pに格納されているアドレスはなにかを問うている。
    std::cout << "*p == " << *p << "\n";    // アドレスpに格納されている値をよんでこいと言っている。(デリファレンス： 参照解除)


    int y = 123;
    int const * q  = &y;       // int const ポインタ型(「int const *」型)変数pはxを参照せよ

    int *p;





}

