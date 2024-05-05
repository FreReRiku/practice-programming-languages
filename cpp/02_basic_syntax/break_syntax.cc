/* break */
#include <iostream>

int main()
{
    /* break文 */
    // 現在のループ処理を中断してループ文を終了します。

    int x = 5;

    while (true) {
        x += x - 3;
        std::cout << x << std::endl;

        if (x % 5 == 0) {
            break; // while文を抜ける
        }
    }

    // ループ文がネストしている場合には、最も内側にある文のみが対象になります。

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j) {
                break; // jのループ文を抜ける
            }
            std::cout << i << "," << j << std::endl;
        }
    }
}
