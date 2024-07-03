/* sample06.c */

/* 構造体の引数 */

/* 構造体で情報を渡す
 * 構造体変数は、それ自体が1つの変数として扱われます。
 * したがって、構造体型の引数を扱うことができ、一度に複数の情報を渡すことができます。
 * 
 * 構造帯型の引数も、今までの引数とまったく同じ方法で指定できます。
 * ただし、typedefで宣言していない場合は、structをタグ名の前につける必要があります。
 * 次の関数は、student型の構造体変数を引数として受け取る関数です。
 * 
 * -student型の構造体変数を引数として受け取る関数-------------------
 *  void student_print(student data)
 * ----------------------------------------------
 * 
 * 受け取る側の関数での使い方も、通常の引数とまったく同じです。
 * 次の関数は、student型の内容をすべて表示するものです。
 * 
 * -student型の内容をすべて表示する関数------------------------
 *  void student_print(student data)
 *  {
 *      printf("[学年]:%d\n", data.year);
 *      printf("[クラス]:%d\n", data.clas);
 *      printf("[出席番号]:%d\n", data.number);
 *      printf("[名前]:%s\n", data.name);
 *      printf("[身長]:%f\n", data.stature);
 *      printf("[体重]:%f\n", data.weight);
 *      return;
 *  }
 * 
 * 配列のときは、引数にしても、渡されるのは先頭アドレスだけでしたが、
 * 構造体型の引数は、受け取る側の関数にすべての値がコピーされます。
 * したがって、受け取る側の関数で引数の中身を変更しても、元の構造体変数には影響しません。
 * 
 * 呼び出し側でも、通常の変数とまったく同じ方法で呼び出すことができます。
 * 次のプログラムは、先ほどの関数を呼び出す例です。
 */

#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
} student;

void student_print(student data);

int main(void)
{
    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(data);    /* 呼び出し */

    return 0;
}

void student_print(student data)
{
    printf("[学年]:%d\n", data.year);
    printf("[クラス]:%d\n", data.clas);
    printf("[出席番号]:%d\n", data.number);
    printf("[名前]:%s\n", data.name);
    printf("[身長]:%.1f\n", data.stature);
    printf("[体重]:%.1f\n", data.weight);
    return;
}

/*
 * この関数は、student型の構造体変数の中身をすべて表示する関数となっています。
 * 
 * -構造体の中の配列-------------------------------------
 * 構造体の中に配列が含まれている場合は、配列の中身もコピーされて渡されます。
 * したがって、中身を変更しても、呼び出し元の変数には影響しません。
 * 配列をコピーして渡したいとき(たとえば、リバーシのプログラムで盤面情報を渡したいなど)には、
 * 構造体にしてしまうのが一番簡単です。
 * ----------------------------------------------
 */
