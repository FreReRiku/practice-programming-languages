/* ** No.06: 0? **
 * 整数値を入力させ、値が0ならzeroと表示するプログラムを作成せよ。
 */

#include <stdio.h>

int main(void)
{
    int input_number;
    printf("input number: ");
    scanf("%d", &input_number);

    if (input_number == 0) {
        printf("zero\n");
    }
    return 0;
}
