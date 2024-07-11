/* exercise18_3_1.c */

#include <stdio.h>

int olympic(int year);

enum {
    OLYMPIC_N,
    OLYMPIC_SUMMER,
    OLYMPIC_WINTER
};

int main(void)
{
    int year;
    int hold;

    printf("西暦年を入力してください：");
    scanf("%d", &year);

    hold = olympic(year);

    switch (hold) {
        case OLYMPIC_SUMMER:
            printf("夏季五輪\n");
            break;
        case OLYMPIC_WINTER:
            printf("冬季五輪\n");
            break;
        case OLYMPIC_N:
            printf("開催なし\n");
            break;
    }

    return 0;
}

int olympic(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return OLYMPIC_SUMMER;
        }
        return OLYMPIC_WINTER;
    } else {
        return OLYMPIC_N;
    }
}

