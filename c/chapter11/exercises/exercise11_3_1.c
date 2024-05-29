#include <stdio.h>

int is_olympic_year(int);

int main(void)
{
    int year;
    int hold;

    printf("開催年を整数で入力してください：");
    scanf("%d", &year);

    hold = is_olympic_year(year);

    switch (hold) {
        case 0:
            printf("この年ではオリンピックが開かれません。\n");
            break;
        case 1:
            printf("この年では夏季オリンピックが開かれます。\n");
            break;
        case 2:
            printf("この年では冬季オリンピックが開かれます。\n");
            break;
    }

    return 0;
}

int is_olympic_year(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return 1;
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}
