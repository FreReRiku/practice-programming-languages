/* variables */
#include <iostream>

int main()
{
    /* 変数 */
    // C++で変数を使用する方法について説明します。整数値の変数を宣言するには次のようにします。

    int a = 5;  // int は整数を表現する型です。
    std::cout << a << std::endl;

    int b;
    b = 5;  // 宣言時に初期化をせずに後で値を代入することもできます。
    std::cout << b << "\n";
    

    int c;  // 初期値を設定しないまま変数を使用すると不定な値が入るので注意してください。
    std::cout << c << std::endl;


    /* const */
    // const を付けると値の書き換えを禁止できます。

    int const d = 5;    // 左の状態で　d = 10 などといったような値の書き換えをすることができない。
    std::cout << d << std::endl;
    





}
