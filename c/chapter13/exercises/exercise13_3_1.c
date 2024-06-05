#include <stdio.h>

int main(void)
{
    int data[10];
    int i;

    for (i = 0; i <  10; i++) {
        printf("%d 番目の数値を入力してください: ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", data[9 - i]);
    }

    return 0;
}
