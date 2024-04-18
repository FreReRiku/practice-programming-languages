/*
* No.05 四則演算
* 整数値を2つ入力させ、それらの値の和、差、積、商と余りを求めるプログラムを作成せよ。
* なお、差と商は1つ目の値から2つ目の値を引いた、あるいは割った結果とする。
* 余りがない場合は0と表示せよ。
*/

#include <stdio.h>

int main(void)
{
    /* 入力用変数の宣言 */
    int number_one, number_two;

    /* 入力処理 */
    printf("input 1st number: ");
    scanf("%d", &number_one);

    printf("input 2nd number: ");
    scanf("%d", &number_two);

    /* 計算と画面出力 */
    printf("和: %d\n", number_one + number_two);
    printf("差: %d\n", number_one - number_two);
    printf("積: %d\n", number_one * number_two);
    printf("商: %d, 余り: %d\n", number_one / number_two, number_one % number_two);

    return 0;
}
