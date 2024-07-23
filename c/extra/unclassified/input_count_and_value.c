/* input_count_and_value.c */

/* N個の値を入力するプログラムについて */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 0;
    int * value;

    /* 個数入力 */
    scanf("%d", &count);

    /* 値を格納するための配列の長さを設定 */
    value = (int *)malloc(sizeof(int) * count);

    /* 値入力*/
    for (int i = 0; i < count; i++) {
        scanf("%d", &value[i]);
    }

    for (int i = 0; i < count; i++) {
        if (i) {printf(", ");}
        printf("%d", value[i]);
    }

    printf("\n");

    free(value);

    return 0;
}

