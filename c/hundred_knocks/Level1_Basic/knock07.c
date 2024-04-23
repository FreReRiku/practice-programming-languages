/* ** No.07 0 or not 0 **
 * 整数値を入力させ、値が0ならzero、0でなければnot zero と表示するプログラムを作成せよ。
 */

#include <stdio.h>

int main(void)
{
    int input_number;
    printf("input number: ");
    scanf("%d", &input_number);

    if (input_number == 0) {
        printf("zero\n");
    } else {
        printf("not zero\n");
    }
    
    return 0;
}
