/* sum.c */

int Public; /* 変数の実体の作成 */

int sum(int min, int max)
{
    int num;
    num = (min + max) * (max - min + 1) / 2;

    return num;
}

