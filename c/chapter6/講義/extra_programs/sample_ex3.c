/*
* 整数Nが入力されたら、1以上N以下の整数をカンマ区切りで出力する
*/

#include <stdio.h>

int main(void)
{
    int N;
    int i;

    scanf("%d", &N);
    
    for (i = 1; i <= N; i++){
        printf("%d", i);
        if (i < N){
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
