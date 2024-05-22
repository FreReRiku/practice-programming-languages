/*
* C言語で1から1000までの整数をカンマ区切りで出力するにはどのようにすればよいか？
*/

#include <stdio.h>

int main(void)
{
    int a; /* 変数の宣言 */
    
    for(a = 1; a <= 1000; a++){
        printf("%d", a);
        if(a < 1000){
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
