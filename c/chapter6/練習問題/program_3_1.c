/* プログラム書取 問3-1 */


/* 方針
* 1. 定価を入力するための変数を用意する
* 2. 各割引額を表示させるための変数を用意する
* 3. 処理を行い、整数にキャストした値を表示させる。
*/

#include <stdio.h>

int main(int argc, char *argv[]){

    /* 変数宣言 */
    int original_price;
    double discount_10;
    double discount_30;
    double discount_50;
    double discount_80;

    /* 定価入力 */
    printf("定価を入力してください。\n");
    scanf("%d", &original_price);

    /* 各割引計算 */
    discount_10 = original_price * (1 - 0.1);
    discount_30 = original_price * (1 - 0.3);
    discount_50 = original_price * (1 - 0.5);
    discount_80 = original_price * (1 - 0.8);

    /* 結果の出力 */
    printf("1割引の値段は %d 円です\n", (int)discount_10);
    printf("3割引の値段は %d 円です\n", (int)discount_30);
    printf("5割引の値段は %d 円です\n", (int)discount_50);
    printf("8割引の値段は %d 円です\n", (int)discount_80);


    return 0;
}
