/* コンピューター的な表示 */

/*
* printf関数では、コンピューターでよく見かける、0を使った表示も可能である。
* 桁数の前に0を付けると、空白の代わりに0をつけて表示するようになります。
* 次のプログラムは、先頭に0を付けるように変更した例です。
 */

#include <stdio.h>

int main(void)
{
    int a = 10000;
    int b = 500;
    int c = 3;

    printf("Aは %05d です\n", a);
    printf("Bは %05d です\n", b);
    printf("Cは %05d です\n", c);

    return 0;
}

/* sample13.cに続く */
