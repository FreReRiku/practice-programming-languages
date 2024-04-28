/* **No.08 正の整数?** */
/* 整数値を入力させ、値が正であればpositiveと表示するプログラムを作成せよ。ただし0は正には含まない。 */

#include <stdio.h>

int main(void){
    int number;
    printf("input number: ");
    scanf("%d", &number);

    if (number >= 1) {
        printf("positive\n");
    }

    return 0;
}
