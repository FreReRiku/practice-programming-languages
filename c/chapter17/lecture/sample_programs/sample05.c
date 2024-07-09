/* sample05.c */

/* sample04.cのつづき
 * また、複数の数値をカンマ(,)で区切って並べると、
 * 複数の変数を読み込むことも可能です。
 */

#include <stdio.h>

int main(void)
{
    int i;
    int j;
    FILE * file;
    file = fopen("test.txt", "r");
    fscanf(file, "%d,%d", &i, &j);
    fclose(file);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

/*
 * このように、カンマ(,)で区切って数値や文字列を並べたファイルをCSV形式と呼びます。
 * エクセルなどの表計算ソフトで扱える汎用的なファイル形式として知られています。
 * 上記のプログラムによって、エクセルで保存したCSVファイルを、自作プログラムで読み込むことも可能です。
 */
