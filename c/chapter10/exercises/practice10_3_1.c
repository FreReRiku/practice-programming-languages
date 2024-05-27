#include <stdio.h>

int main(void)
{
    int score = 0;

    do {
        printf("テストの点数を0~100の整数値で入力してください。\n");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    printf("入力されたテストの点数は %d 点です。\n", score);

    return 0;
}
