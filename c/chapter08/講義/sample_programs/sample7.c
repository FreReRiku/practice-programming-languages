/* sample7.c */
// 同様の処理をまとめる

/*
 * 次は、先程の名簿を使って、性別を表示させるプログラムを考えてみます。
 * これは、文字列を書き換えるだけなのでとても簡単です。
 * 次のプログラムは、文字列を書き換えて作ったものです。
 */

#include <stdio.h>

int main(void)
{
    int no;
    scanf("%d", &no);

    switch (no) {
        case 1:
            printf("男性\n");
            break;
        
        case 2:
            printf("女性\n");
            break;
        
        case 3:
            printf("男性\n");
            break;
        
        case 4:
            printf("男性\n");
            break;
        
        default:
            printf("そんな番号の人はいない\n");
            break;
    }
    
    return 0;
}

/*
 * またまたおなじみの検討方法になるのですが
 * このプログラムを見ると、「男子」の文字列が3回も使われています。
 * なんとかこれを1回で済ますことはできないのでしょうか。
 */
