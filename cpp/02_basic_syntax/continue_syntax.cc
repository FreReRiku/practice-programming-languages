/* continue */
#include <iostream>

int main()
{
    /* continue文 */
    // 現在のループ処理を中断して、次のループ処理を行います。
    for (int x = 0; x < 10; ++x) {
        if (x == 5) {
            continue; // 5だけスキップ
        }
        std::cout << x << std::endl;
    }

    // ループ文がネストしている場合には、最も内側にある文のみが対象になります
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j) {
                continue; // j のループ処理をスキップ
            }
            std::cout << i << "," << j << std::endl;
        }
    }
    
    // continue では次のループ処理を行うため、do-while では先頭に戻るのではなく末尾へ移動する動作となります。
    do {
        std::cout << "done" << std::endl;
        continue; // ループ処理をスキップ（先頭に戻る動作なら無限ループになってしまうため、末尾へ移動する。）

        std::cout << "never reached" << std::endl; // 実行されない、continueを読んだ時点で31行目の}(末尾)にとぶ。
    } while (false); // 条件がfalseであるため1回目で終了 
}
