/* knock52.c */
/* 西暦を入力したらその年が閏（うるう）年かどうかを判定するプログラムを作成せよ。なお、4で割り切れる年のうち、100で割り切れないか、400で割り切れる年は閏年である。 */

#include <stdio.h>

int main(void)
{
    int input_year = 0;
    printf("西暦を入力してください：");
    scanf("%d", &input_year);

    if (input_year % 4 == 0 && input_year % 100 == 0 && input_year % 400 != 0) {
        printf("%d年は平年です。\n", input_year);
    } else if (input_year % 4 == 0) {
        printf("%d年は閏年です。\n", input_year);
    } else {
        printf("%d年は平年です。\n", input_year);
    }

    return 0;
}

