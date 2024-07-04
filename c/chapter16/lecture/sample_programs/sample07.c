/* sample07.c */

/* 構造体でもポインタ変数
 * 構造体型のポインタ変数を作ることができます。
 * 宣言の方法などは同じです。
 * 次のプログラムは、student型へのポインタ変数を使用する例です。
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

    pdata = &data;                      /* 初期化(dataのアドレスをstudent型のポインタ変数pdataに代入) */
    (*pdata).year = 10;                 /* 通常変数モードへの切り替え */
    strcpy((*pdata).name, "MARIO");     /* 通常変数モードへの切り替え */

    printf("%d\n", (*pdata).year);
    printf("%s\n", data.name);

    return 0;
}

/*
 * 構造体の各要素は、宣言の時の順番通りに並んでおり、
 * &演算子で求められるアドレスは、構造体の始めの要素のアドレスです。
 * 
 * 構造体のポインタ変数の場合も、*記号で通常変数モードに切り替えることができます。
 * ただし、. の方が優先されるので、かっこをつけて次のようにします。
 * 
 * -構造体のポインタ変数経由で要素にアクセス-------------------------
 * (*構造体ポインタ変数名).要素名
 * ----------------------------------------------
 */
