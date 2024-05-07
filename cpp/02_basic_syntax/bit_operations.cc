/* bit_operations */
#include <bitset>
#include <iostream>

int main()
{
    /* ビットの演算 */

    // ビットに対する演算は次の演算子を使うことで可能となります。
    /*
     * ~x;         // 否定
     * x << y;     // 左シフト
     * x >> y;     // 右シフト
     * x & y;      // 論理積
     * x | y;      // 論理和
     * x ^ y;      // 排他的論理和
     */

    // std::bitset を使うことで、ビット列(2進数)での表記が確認できます。
    auto bits_a = std::bitset<8>("00001111");   // 8ビット表記           : 00001111
    std::cout << ~bits_a        << std::endl;   // 否定                 : 11110000
    std::cout << (bits_a << 2)  << std::endl;   // 左に2シフト           : 00111100
    std::cout << (bits_a >> 2)  << std::endl;   // 右に2シフト           : 00000011

    // 整数型でもビット演算は行えます。ビットを取り扱う際は、unsignedがついた符号なし整数型を利用することが望ましいです。

    unsigned int a = 0x0000000f;                // 15
    std::cout << std::showbase  << std::hex;    // 奇数のプレフィックスを出力 + 16進数で出力
    std::cout << ~a             << std::endl;   // 0xfffffff0
    std::cout << (a << 2)       << std::endl;   // 0x3c
    std::cout << (a >> 2)       << std::endl;   // 0x3

    unsigned int b = 0x0000003c;                // 60
    std::cout << (a & b)        << std::endl;   // 0xc
    std::cout << (a | b)        << std::endl;   // 0x3f
    std::cout << (a ^ b)        << std::endl;   // 0x33





}
