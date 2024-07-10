/* sample08.c */

/* sample07.cのつづき
 * fwrite関数による書き込みでは、配列を1度で書き込むこともできます。
 * やり方は、変数の代わりに配列を指定するだけです。
 * 次のプログラムは、配列の値を書き込むプログラムです。
 * (配列名は、式の中では先頭アドレスになるので、&をつけません。)
 */

#include <stdio.h>

int main(void)
{
    int buf[] = {10, 100, 1000, 10000};
    FILE * file;
    file = fopen("test.dat", "wb");
    fwrite(buf, sizeof(buf), 1, file);
    fclose(file);

    return 0;
}

/* このプログラムを実行すると、test.datに値が書き込まれます。 */

