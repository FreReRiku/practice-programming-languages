/* knock46.c */

/* 神山美術館の入場料金は、一人600円であるが、5人以上のグループなら一人550円、20人以上の団体なら一人500円である。人数を入力し、入場料の合計を計算するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int total_fee(int); // function_prototype

    int people = 0;
    printf("人数を入力してください：");
    scanf("%d", &people);

    printf("合計は%d円です。\n", total_fee(people));

    return 0;
}

int total_fee(int people)
{
    if (people >= 5 && people < 20) {
        return people * 550;
    } else if (people >= 20) {
        return people * 500;
    }
    return people * 600;
}

