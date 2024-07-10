/* exercise17_3_1.c */

#include <stdio.h>

int main(void)
{
    FILE * file;
    file = fopen("score.csv", "w");

    fprintf(file, "番号,名前,テストの平均点\n");
    fprintf(file, "1,Nbのびt,0\n");
    fprintf(file, "2,Mnmtしずk,90\n");
    fprintf(file, "3,Gudたけs,40\n");
    fprintf(file, "4,Hnkwスネo,70\n");

    fclose(file);

    return 0;
}

