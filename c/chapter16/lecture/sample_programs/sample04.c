/* sample04.c */

/* 構造体変数自体の処理
 * 前項では、構造体の各要素にアクセスする方法を説明しましたが、
 * これでは、見た目は確かにまとまっているようにも見えるものの、
 * 実際の使い方は、普通の変数とまったく同じで、あまり意味がないようにも見えます。
 * 
 * しかし、構造体の場合、構造体変数自体を変数として取り扱うことができます。
 * たとえば、構造体変数同士で、代入を行うことが可能となっています。
 * 次のプログラムは、構造体変数同士で代入を行う例です。
 */

#include <stdio.h>
#include <string.h>

struct student
{
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
};

int main(void)
{
    struct student data1, data2;

    /* data1 へ代入 */
    data1.year = 3;
    data1.clas = 4;
    data1.number = 18;
    strcpy(data1.name, "MARIO");
    data1.stature = 168.2;
    data1.weight = 72.4;

    /* data1の内容をdata2にコピー */
    data2 = data1;

    /* data1とdata2の内容を表示 */
    printf("-year----------\n");
    printf("data1.year = %d\n", data1.year);
    printf("data2.year = %d\n", data2.year);
    printf("\n");

    printf("-clas----------\n");
    printf("data1.clas = %d\n", data1.clas);
    printf("data2.clas = %d\n", data2.clas);
    printf("\n");

    printf("-number--------\n");
    printf("data1.number = %d\n", data1.number);
    printf("data2.number = %d\n", data2.number);
    printf("\n");

    printf("-name----------\n");
    printf("data1.name = %s\n", data1.name);
    printf("data2.name = %s\n", data2.name);
    printf("\n");

    printf("-stature-------\n");
    printf("data1.stature = %.2f\n", data1.stature);
    printf("data2.stature = %.2f\n", data2.stature);
    printf("\n");

    printf("-weight----------\n");
    printf("data1.weight = %.2f\n", data1.weight);
    printf("data2.weight = %.2f\n", data2.weight);
    printf("\n");

    return 0;
    
}

/*
 * このプログラムでは、まず、data1の各要素に代入を行っています。
 * そして、data2をdata1に代入しています。
 * その結果を表示してみると、data1とdata2の中身は同じになっています。
 * 
 * このように、構造体変数では、全要素を一括して代入できます。
 * あとで説明することですが、他にも、関数の引数として利用したりなど、
 * 構造体変数はそれ自体を1つの変数として使うことができ、
 * 1つ1つ代入しなければならなかった配列よりも便利です。
 * 
 * -構造体変数の比較-------------------------------------
 * 構造体変数は、それ自体を1つの変数として使えることを説明しましたが、
 * 残念ながら、構造体変数同士での演算や比較は行えません。つまり、
 * 
 * ```c
 * struct student data1, data2;
 * // data1とdata2に値を代入
 * if (data1 == data2) {
 * // なんらかの処理
 * }
 * ```
 * 
 * のようなプログラムは書けません。
 * ----------------------------------------------
 */
