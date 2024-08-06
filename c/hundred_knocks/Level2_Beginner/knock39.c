/* knock39.c */

/* {3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、最初は参照する要素番号を0とする。この参照する要素番号の配列要素の値から次の要素番号の配列要素の値を引いた値を表示し、参照する要素番号を1増やす。この手順を9回繰り返すプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int len_array = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < len_array; i++) {
        if (!i) {
            printf("%d\n", array[i]);
        } else {
            printf("%d\n", array[i - 1] - array[i]);
        }
    }

    return 0;
}

