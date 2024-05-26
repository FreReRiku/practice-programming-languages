/* sample4.c*/

/* 入力チェック のつづき
 * sample3.cのプログラムでは入力チェックができていますが、
 * sample4.cでは、入力値が間違っているならば再入力させることにしましょう。
 * 次のプログラムは、while文で再入力を実装した例です。
 */

#include <stdio.h>

int main(void)
{
    int r;
    double s;

    printf("半径？：");
    scanf("%d", &r);

    while (r < 0) {
        printf("半径？：");
        scanf("%d", &r);
    }

    s = r * r * 3.14159;
    printf("面積は %f です。\n", s);

    return 0;
}

/* 上記のプログラムでは見事に再入力が行われています。 */
