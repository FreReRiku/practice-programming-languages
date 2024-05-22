/* sample6.c */
// 当てはまらない場合の処理

/*
 * 実は、前項のswitch文~case文のプログラムを実行してみると、else-if文で作成した時とは結果が異なることがあります。
 * else-if文の時は、名簿にない番号を指定したときは、「そんな番号の人はいない」と間違いを表示してくれたのですが
 * switch文~caseのプログラムでは、何も表示してくれません。
 * このように、他のcaseの値に当てはまらない場合に処理を実行させるには、default(デフォルト)を使用できます。
 * defaultは、case文の代わりとして使うことができます。
 * defaultは、他のcaseに当てはまる数値がなかった場合にジャンプします。
 * 次のプログラムは、defaultを追加したものです。
 */

#include <stdio.h>

int main(void)
{
    int no;
    scanf("%d", &no);

    switch (no) {
        case 1:
            printf("野比漢\n");
            break;
        
        case 2:
            printf("源姫\n");
            break;
        
        case 3:
            printf("豪田\n");
            break;

        case 4:
            printf("骨漢\n");
            break;

        default:
            printf("そんな番号の人はいない\n");
            break;
    }

    return 0;
}
