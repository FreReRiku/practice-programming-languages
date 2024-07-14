/* pointer001.c */
/* ポインターの基本 */

#include <stdio.h>

int main(void){
    int x;
    char name[64];

    int *p;
    char *name_p;

    p = &x;
    name_p = &name[0];

    printf("Enter the value you like.\n");
    scanf("%d", p);

    printf("Enter the word you like.\n");
    scanf("%s", name_p);

    printf("\n");
    printf("Value:\t%d\n", x);
    printf("Word:\t%s\n", name);

    return 0;
}

