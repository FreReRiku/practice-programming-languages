/* knock36.c */

/* {3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、整数値を2つ入力させ、要素番号が入力値である2つの配列要素の値の積を計算して表示するプログラムを作成せよ。入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。 */

#include <stdio.h>

int main(void)
{
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};

    int input_number_A = 0;
    int input_number_B = 0;

    printf("1番目の整数値を入力してください：");
    scanf("%d", &input_number_A);
    printf("2番目の整数値を入力してください：");
    scanf("%d", &input_number_B);

    printf("%d * %d = %d\n", array[input_number_A], array[input_number_B], array[input_number_A] * array[input_number_B]);

    return 0;
}

