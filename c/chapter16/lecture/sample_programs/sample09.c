/* sample09.c */

/* 構造体でもポインタ引数
 * 前項では、構造体でもポインタ変数にすることができると説明しましたが、
 * 同様にして、構造体型へのポインタ型の引数を持つ関数も作ることができます。
 * 次のプログラムは、先ほどの関数を、ポインタ変数を使うよう改造した例です。
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

void student_print(student *data);

int main(void)
{
    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(&data);   /* アドレスで呼び出す */

    return 0;
}

void student_print(student *data)
{
    printf("[学年]:%d\n", data->year);
    printf("[クラス]:%d\n", data->clas);
    printf("[出席番号]:%d\n", data->number);
    printf("[名前]:%s\n", data->name);
    printf("[身長]:%f\n", data->stature);
    printf("[体重]:%f\n", data->weight);
    return;
}

/*
 * まず、引数の型がポインタ型として宣言されていることがわかります。
 * 関数を呼び出すときには、&演算子をつけて、アドレスを渡していることもわかります。
 * また、呼び出された関数内では、->記号で各要素にアクセスしています。
 * 
 * 普通に渡すことができる構造体を、ポインタ変数として渡す理由は2つあります。
 * 1つ目は、普通のポインタ変数と同じく、関数内で値を変更できるようにするためです。
 * ここでは試していませんが、関数内で値を変えると、呼び出し元の変数の中身も変わります。
 * 
 * 2つ目は、関数呼び出しの高速化のためです。
 * 構造体を渡す時、その中身はすべてコピーされます。
 * 構造体の中に、大きな配列があれば、その中身はすべてまるごとコピーされます。
 * これは、当然ながらそれなりに時間のかかる処理となります。
 * しかし、ポインタのアドレス値を渡すだけなら、非常に高速です。
 * 
 * とはいえ、現代のコンピュータはとても高速なので、値渡しであっても、それほど問題にはなりません。
 * 慣れないうちは、値渡しのほうが扱いやすいため、値渡しで行うことをおすすめします。
 */
