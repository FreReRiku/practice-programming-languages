/* sample02.c */

/* 文字列に名前をつける
 * #define疑似命令では、数値だけでなく、文字列にも名前をつけられます。
 * 使い方は、数値の場合と同じですが、文字列には、""をつける必要があります。
 * 次のプログラムは、プログラムの作者名を表示します。
 */

#include <stdio.h>

#define AUTHOR "Author_name"

int main(void)
{
    printf("作者名: %s\n", AUTHOR);

    return 0;
}

/*
 * ここでも、AUTHORは"Author_name"に置き換えられます。
 * もちろん、#define疑似命令の部分を変更すれば、すべてのAUTHORに影響します。
 */
