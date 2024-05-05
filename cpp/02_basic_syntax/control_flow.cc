/** 制御文 **/
#include <iostream>
int main()
{
    /* if */
    // 条件分岐をしたいときはifを使用します。
    // ifの条件を満たさなかった場合に何か処理をしたければelseを使用し、更に別の条件で分岐したければelse ifを使用します。
    int x = 5;
    if (x == 5) {
        std::cout << "xの値は5です。" << std::endl;
    } else if (x == 6) {
        std::cout << "xの値は6です。" << std::endl;
    } else {
        std::cout << "xの値は5, 6以外の値です。";
    }

    /* switch */
    // 一つの変数の値を調べながら分岐するような処理を書きたい場合はswitch文を使います。
    switch (x) {
        case 0:
            std::cout << "xの値は0です。" << std::endl;
            break;

        case 1:
            std::cout << "xの値は1です。" << std::endl;
            break;

        default:
            std::cout << "xの値は0, 1以外の値です。" << std::endl;
            break;
    }
    // ただし、switch文が使用できるのは下記のいずれかの場合に限ります。
    // 整数型・列挙型・整数型か列挙型へ暗黙に変換できるクラス型

    // switch文の方がifよりも比較回数が少ないため効率的です。ifはまずはじめにx == 0がtrueかどうかを調べ、falseであれば次にx ==　1 を評価しますが、switch文はいきなり特定のcaseにジャンプします。

    /* フォールスルー */
    // switchの各caseにかかれているbreakの有無によって振る舞いが変わります。
    int y = 1;
    switch (y) {
        case 0:
            std::cout << "yは0です。" << std::endl;
        case 1:
            std::cout << "yは1です。" << std::endl;
        defalut:
            std::cout << "yは0, 1以外の値です。" << std::endl;
            break;

    }
    // breakを書いた場合はswitch文の処理はそこで終わりますが、breakを書かなかった場合はそのまま下のcaseに処理が流れてしまいます。つまり上記のコードはx == 0であればcase 0ないの処理を行った後にcase 1内の処理を行い、最後にdefalutの処理を行います。x == 1であれば同様の振る舞いがcase 1 からはじまります。このようなswitch文の仕様をフォールスルーといいます。これはcase 0とcase 1の処理が同じものになる場合に使用すると便利です。
    
    // それ以外のケースでフォールスルーをさせるシーンはまずないため、break を忘れずにつけておく必要があります。
    
}
