/* knock38.c */

/* {3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、最初は参照する要素番号を0とし、この参照する要素番号の配列要素の値を表示し、次にその配列要素の値を次の参照する要素番号とし、この次の参照する要素番号の配列要素の値を表示し、さらにその配列要素の値を次の参照する要素番号とし、これを10回繰り返すプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int len_array = sizeof(array) / sizeof(array[0]);
    int ref = 0;

    for (int i = 0; i < len_array; i++) {
        printf("%d\n", array[ref]);
        ref = array[ref];
    }

    return 0;
}

