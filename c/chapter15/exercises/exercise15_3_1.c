#include <stdio.h>

int maxmin(int[], int *, int *);


int main(void)
{
    int array[10];
    int max;
    int min;

    printf("0 - 100までの数字を10個入力してください。\n");

    
    
    for (int i = 0; i < 10; ++i) {
    scanf("%d", &array[i]);
    }
    
    maxmin(array, &max, &min);
    printf("\n");
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    
    return 0;
}

int maxmin(int array[], int *max, int *min)
{
    printf("Array: ");

    /* 最初のループ実行時のみ区切り文字を出力しないように条件分岐 */
    /* 現在がループの最終回かをスマートに判別するのは難しい */
    for (int i = 0; i < 10; ++i) {
        if (i) {
            printf(", ");
        }
        printf("%d", array[i]);
    }
    printf("\n");

    // pattern1
    for (int i = 0; i < 10; ++i) {
        if (array[i] == -1) { break; }
        if (!i) {
            *max = array[i];
            *min = array[i];
        }
        if (*max < array[i]) { *max = array[i]; }
        if (*min > array[i]) { *min = array[i]; }
    }
    
    /* pattern2 */
    /*for (int i = 0; i < 10 || array[i] != -1; ++i) {
        *max = (*max > array[i]) ? (*max) : (array[i]);
        *min = (*min < array[i]) ? (*min) : (array[i]);
    }*/

    return 0;
}
