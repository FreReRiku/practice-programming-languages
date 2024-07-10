/* sample06.c */

/* sample05.cのつづき
 * 前項で説明した通り、巨大なマクロを作成すると
 * プログラムのサイズが大きくなる可能性があるため、
 * 一般的には、マクロは決まり切った数式などに利用されます。
 * たとえば、次のマクロは台形の面積を求めるマクロです。
 */

#include <stdio.h>

#define GET_TRAPEZOID_AREA(A, B, H) (A + B) * H / 2

int main(void)
{
    int upper;
    int lower;
    int height;
    int surface;

    printf("上底を入力してください：");
    scanf("%d", &upper);
    printf("下底を入力してください：");
    scanf("%d", &lower);
    printf("高さを入力してください：");
    scanf("%d", &height);

    surface = GET_TRAPEZOID_AREA(upper, lower, height);
    printf("面積：%d\n", surface);

    return 0;
}

/* この様にすれば、決まり切った数式を何度も入力する必要がなくなります。 */
