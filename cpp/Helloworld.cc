#include <iostream>

int main() {
    std::cout // stdという名前空間の中のcout(character output)に対して、
    <<  // 左矢印
    "Hello"
    << ",world\n" /*<< std::flush*/;  // std::flush は省略することができる（プログラムの終わりで勝手にやってくれる。）
    // c++　ではreturn 0を省略することができる。
}
