#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        if(i != 0){
            printf(",");
        }
        printf("%d", i + 1);
    }
    printf("\n");
    return 0;
}
