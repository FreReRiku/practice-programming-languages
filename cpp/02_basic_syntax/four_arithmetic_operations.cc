/* operators */
#include <iostream>

int main()
{
    /* 演算子 */
    // このプログラムでは算術演算子を中心にC++で利用できる演算子を紹介します。

    int x = 20;
    int y = 10;

    /* 四則演算と剰余 */
    // 基本的な演算は次の演算子を使うことで可能です。

    std::cout << x + y << std::endl;    // 加算
    std::cout << x - y << std::endl;    // 減算
    std::cout << x * y << std::endl;    // 乗算
    std::cout << x / y << std::endl;    // 除算
    std::cout << x % y << std::endl;    // 剰余
    // notice: 0で除算(剰余)すると実行時エラーとなるため、注意してください。

    // 演算の対象となるいずれかの値がdouble(またはfloat)の場合、他方の値もdouble(float)として変換された上で演算が行われます。

    int     ix = 100;
    int     iy = 50;
    double  dx = 100.0;
    double  dy = 50.0;

    auto a = ix / iy;   // int      = int / int
    auto b = ix / dy;   // double   = double(intから変換) / double
    auto c = dx / iy;   // double   = double / double(intから変換)
    auto d = dx / dy;   // double   = double / double
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    
}
