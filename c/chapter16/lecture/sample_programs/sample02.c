/* sample02.c */

/* sample01.mdのつづき
 * 前項のようにして、構造体タグと構造体変数を宣言できます。
 * 次のプログラムは、構造体タグと構造体変数を宣言する例です。
 */

struct student {
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
};

int main(void)
{
    struct student data;
    return 0;
}

/*
 * この例のように、構造体タグは、関数よりも先に宣言するのが普通です。
 * なぜなら、そうすれば、後に登場するすべての関数でこの構造体が使えるからです。
 */
