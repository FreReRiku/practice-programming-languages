/* knock37.c */

/* {3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、整数値を入力させ、要素番号が入力値の配列要素の値を参照し、さらにその参照した値を要素番号とする配列要素の値を参照して表示するプログラムを作成せよ。入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。 */

#include <stdio.h>

int main(void)
{
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int input_number = 0;
    printf("整数値を入力してください：");
    scanf("%d", &input_number);

    int attr_num = array[input_number];
    int output_number = array[attr_num];

    printf("value = %d\n", output_number);

    return 0;
}

