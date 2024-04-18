/*
* C言語で1から1000までの整数をカンマ区切りで出力するにはどのようにすればよいか？
*/

#include <stdio.h>

int main(void)
{
    int a; /* 変数の宣言 */
    
    for(a = 1; a <= 1000; a++){

        /* 1000より前の処理を行う */
        printf("%d", a);
        printf(", ");

        /* aが1000の時の処理(,をつけない処理)*/
        if(a == 1000){
            printf("%d", a);
        }
    }
    printf("\n");

    return 0;
}
