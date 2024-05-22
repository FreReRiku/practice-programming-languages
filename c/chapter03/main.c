/* 3章：文字列の表示 */
/* ついに文字列を表示するプログラムを作ります */

#include <stdio.h>
int main(void)
{
    printf("HelloWorld\n");

    /* \nを用いると改行することができる。
    次のように文中に\nを入れても構わない。*/

    printf("Hello\nworld\n");

    /* \tは頭揃えのためにタブを挿入するために使う。*/
    printf("Windows\tMicrosoft\n");
    printf("macOS\tApple\n");


}

