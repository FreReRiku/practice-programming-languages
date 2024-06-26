/* sample4.c */

/* 配列の番号
 * 変数の番号同様、配列もアドレスを表示できます。
 * しつこいですが、アドレスとは、変数につけられたロッカー番号のことです。
 * 配列の場合には、先頭に&を付ける必要はありません。
 * ただし、配列の個々の要素は変数と同じ扱いなので、当然&を付けます。
 * 次のプログラムは、配列とその要素のアドレスを表示する例です。
 */

#include <stdio.h>

int main(void)
{
    int array[10];

    printf("array___(%p)\n", array);
    printf("array[0](%p)\n", &array[0]);
    printf("array[1](%p)\n", &array[1]);
    printf("array[2](%p)\n", &array[2]);

    return 0;
}

/*
 * 実行結果を見る限り、配列の場合も4バイトずつ連番に割り当てられているようです。
 * 更に、配列名を指定した場合、配列の最初の要素と同じ番号になるようです。
 * 
 * 実は、ここで配列のトリックのすべてが暴かれています。
 * なんと、配列名は、配列の最初の要素のアドレスを表していたのです。
 * 各要素を参照する時に、[0]、[1]と言った要素番号を付けましたが、この意味は、
 * 配列名のアドレス+要素番号のメモリを参照するという意味になるのです。
 * つまり、最初のアドレスを決めておけば、それに番号を足し算することで、
 * たくさんの変数が並んでいるという状態を表現することができるのです。
 * 
 * ただ、ここで少し不思議なのは、要素番号1のとき、実際のアドレスは4増えているということです。
 * この謎は、int型サイズを思い出していただければ、すぐにわかります。
 * 
 * 32ビットコンパイラでは、int型のサイズは4バイトです。
 * つまり、1つ先のint型の変数のアドレスは、最初のアドレス+4となるのです。
 * 同様に、2つ先のint型の変数のアドレスは、最初のアドレス+8となるのです。
 * 
 * この配列の仕組みについては、後ほどさらに詳しく説明します。
 */