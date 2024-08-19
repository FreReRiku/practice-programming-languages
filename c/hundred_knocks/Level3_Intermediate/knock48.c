/* knock48.c */

/*
 * 最初に2以上の整数値を入力し、次の規則で計算し、計算回数と計算結果を表示し、計算結果が1になるまで繰り返すプログラムを作成せよ。
 * 規則：ある値が偶数ならその値を1/2にする。奇数ならその値を3倍して1を足す。
 */

#include <stdio.h>

int main(void)
{
    int value = 0;
    printf("2以上の整数値を入力してください：");
    scanf("%d", &value);

    int counter = 0;
    do {
        counter++;
        if (value % 2 == 0) {
            value /= 2;
        } else {
            value *= 3;
            value++;
        }
        printf("%d 回目：%d\n", counter, value);
    } while(value != 1);

    return 0;
}

