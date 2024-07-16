/* knock10.c */

#include <stdio.h>

int main(void)
{
    int value = 0;

    printf("値を入力してください。\n");
    scanf("%d", &value);

    if (value >= 0) {
        printf("Absolute value is %d.\n", value);
    } else {
        value *= -1;
        printf("Absolute value is %d.\n", value);
    }

    return 0;
}

