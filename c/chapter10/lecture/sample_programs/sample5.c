/* sample5.c */

/*
 * sample4.cのプログラムで再入力が行われていましたが
 * ソースコードを見ると、scanf関数を2回使っていることがわかります。
 * 
 * 同じデータの入力なのに、scanf関数を2回書くのはまさにムダです。
 * 次のプログラムは、do~while文でこのムダをなくした例です。
 */

#include <stdio.h>

int main(void)
{
    int r;
    double s;

    do {
        printf("半径？：");
        scanf("%d", &r);
    } while (r < 0);

    s = r * r * 3.14159;
    printf("面積は %f です。\n", s);

    return 0;
}

/*
 * 今度は、scanf関数は1回だけ書けば済みます。
 * 必ず1回は実行されるという、do~while文の利点が生かされています。
 */
