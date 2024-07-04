/* sample08.c */

/* sample08.cのつづき
 * 前項のように、(*)をつけるのは面倒なので、次の書き方で代用できるようになっています。
 * 
 * -構造体のポインタ変数経由で要素にアクセス_part2-------------------
 * 構造体ポインタ変数名->要素名
 * ----------------------------------------------
 * 
 * ->は、引き算と比較記号を組み合わせた記号です。
 * （例によって、引き算とも比較ともまったく関係は泣く、記号を流用しているだけです。）
 * この書き方なら、より簡易的な書式で、各要素にアクセスすることができます。
 * 次のプログラムは、->記号を使って各要素にアクセスする例です。
 */

#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

int main(void)
{
    student data;
    student *pdata;

    pdata = &data;                  /* 初期化 */

    pdata -> year = 10;             /* ->記号によるアクセス */
    strcpy(pdata -> name, "MARIO"); /* ->記号によるアクセス */

    printf("%d\n", data.year);
    printf("%s\n", data.name);

    return 0;
}
