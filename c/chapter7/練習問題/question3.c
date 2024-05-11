#include <stdio.h>

int main(void)
{
    int year;
    printf("西暦年を入力してください：");

    scanf("%d", &year);

    if (year % 4 == 0)                  printf("夏季五輪\n");
    if (year % 2 == 0 && year % 4 != 0) printf("冬季五輪\n");
    if (year % 2 != 0)                  printf("五輪開催なし\n");

    return 0;
}
