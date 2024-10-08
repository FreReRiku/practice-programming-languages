/* sample03.c */

/* sample02.cのつづき
 * printf関数と同じように、変数の値を書き込むこともできます。
 * 次のプログラムは、test.txtファイルに変数iの値を書き込みます。
 */

#include <stdio.h>

int main(void)
{
    int i = 100;
    FILE * file;
    file = fopen("test.txt", "w");
    fprintf(file, "%d\n", i);
    fclose(file);

    return 0;
}

/*
 * -読み込みと追加の場合-------------------------
 *  読み込みモードで開いた場合、書き込み用の関数を使っても何も起きません。
 *  追加モードで開いた場合、元のファイルの最後にデータが追加されます。
 * -----------------------------------------------
 */
