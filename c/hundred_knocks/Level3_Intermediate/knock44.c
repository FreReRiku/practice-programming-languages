/* knock44.c */

/* 換算したい金額（円単位）と1ドル何円かを整数値で入力すると、入力した金額が何ドル何セントか計算して表示するプログラムを作成せよ。1セントは1/100ドルである。結果は整数値でよい（1セント未満の端数切り捨て）。 */

#include <stdio.h>

int main(void)
{
    int yen = 0;
    int rate_dollar = 0;
    int dollar = 0;
    int cent = 0;

    printf("換算したい金額を入力してください(日本円)：");
    scanf("%d", &yen);

    printf("1ドルは何円か入力してください：");
    scanf("%d", &rate_dollar);

    dollar = yen / rate_dollar;
    cent = (yen * 100 / rate_dollar) - (100 * dollar);

    printf("ドル：%d, セント：%d\n", dollar, cent);

    return 0;
}

