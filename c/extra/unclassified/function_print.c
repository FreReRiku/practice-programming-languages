/* function_print.c */

#include <stdio.h>
#include <stdlib.h>

int calc_tri(int *, int *);

int main(int argc, char *argv[])
{
    if (argc < 3) exit(1);

    int bottom;
    int height;

    int * bottom_p;
    int * height_p;

    bottom_p = &bottom;
    height_p = &height;

    * bottom_p = atoi(argv[1]);
    * height_p = atoi(argv[2]);

    printf("底辺：%d\n", bottom);
    printf("高さ：%d\n", height);

    int surface = calc_tri(bottom_p, height_p);

    printf("面積は%dです。\n", surface);

    return 0;

}

int calc_tri(int * bottom, int * height)
{
    return (* bottom) * (* height) / 2;
}

