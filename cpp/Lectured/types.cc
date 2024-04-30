#include <iostream>

int main()
{
    bool ok = true;

    char x = 'x'; // 文字コードを格納する型　 char型のリテラルは''で囲まなければならない。

    // char: 8ビット幅整数
    // short: 16ビット幅整数(コンパイラーの種類によって変わるので信用してはいけない)
    // int: 32ビット幅整数(コンパイラーの種類によって変わるので信用してはいけない)
    // long: 64ビット幅整数(コンパイラーの種類によって変わるので信用してはいけない)

    unsigned int constexpr num = 1234u;  // constexpr は型名の前に書かれる悪習がはびこっているが、正しくは後に書くべし。    // unsigned int 型のリテラルを書くには接尾辞　u をつかう。
    unsigned long const double_num = 1597468954ul;    // 同様に　｀const は型名の後に書くべし。 // unsigned long 型のリテラルを書くには接尾辞 ul　をつかう。

    // サイズ指定つき整数型
    // 以下のように書けば数値のビット幅がどのコンパイラでも同じサイズに確定する。

    // std::int8_t (t:type)
    // std::int32_t
    // std::uint32_t
    
    // サイズ指定付き整数型を使用する場合は ##include <cstdint>を入れる必要がある。


    // 浮動小数点数について詳しく学びたければ以下の動画を見ろや
    // https://youtu.be/9hdFG2GcNuA
    double double_value = 567.89;   // 接尾辞をつけていない小数は　 double 型リテラルである。
    float float_value = -12.34f;    // float　型のリテラルを書くには、接尾辞　ｆ　または l をつかう。

    #include <string>
    //文字列を扱うには上記がひつようである。
    std::string s = "Hello";

    s[1] = 'A'; // std::string 型の実体はただのchar型の配列

    std::cout << s << "\n";

}
