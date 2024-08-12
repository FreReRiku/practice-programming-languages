/* knock43.c */

/* 2次方程式 ax^2 + bx + c = 0 （x^2はxの2乗の意味）の係数a, b, cを入力し、2次方程式の解が2つの実数解か、重解か、2つの虚数解かを判別するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    int discriminant(int, int, int);

    printf("係数aの値を入力してください：");
    scanf("%d", &a);
    printf("係数bの値を入力してください：");
    scanf("%d", &b);
    printf("係数cの値を入力してください：");
    scanf("%d", &c);

    int value = discriminant(a, b, c);

    if (value > 0) {
        printf("2次方程式は2つの実数解を持ちます。\n");
    } else if (value == 0) {
        printf("2次方程式は重解を持ちます。\n");
    } else {
        printf("2次方程式は2つの虚数解を持ちます。\n");
    }
    return 0;
}

int discriminant(int a, int b, int c)
{
    return (b * b) - (4 * a * c);
}

