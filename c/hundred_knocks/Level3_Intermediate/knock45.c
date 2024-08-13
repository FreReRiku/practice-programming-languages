/* knock45.c */

/* 初乗り料金が1700mまで610円、それ以降は313mごとに80円のタクシーがある。このタクシーに乗った距離をm単位で入力し、料金を計算するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int calc_fare(int);     /* プロトタイプ宣言 */

    int input_meter = 0;
    printf("乗った距離をm単位で入力してください：");
    scanf("%d", &input_meter);

    int fare = calc_fare(input_meter);

    printf("料金は%dです。\n", fare);

    return 0;
}

int calc_fare(int input_meter)
{
    int first_ride = 1700;

    if (input_meter <= first_ride) {
        // 初乗り料金以内の距離で乗れた時の処理
        return 610;
    } else {
        // それ以降の処理
        int rest = input_meter - first_ride;
        int counter = 0;

        if (rest % 313 == 0) {
            counter = rest / 313;
        } else {
            counter = (rest / 313) + 1;
        }

        // printf("counter is %d\n", counter); // タクシーカウンターのデバッグ用

        return 610 + counter * 80;
    }
}

