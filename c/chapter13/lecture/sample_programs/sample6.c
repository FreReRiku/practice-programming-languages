/* sample6.c */

/* 配列のコピー
 * ある配列のすべての要素の値を他の配列に代入するにはfor文を使います。
 */

#include <stdio.h>

int main(void)
{
    int array1[] = {42, 79, 13, 19, 41};
    int array2[] = {1, 2, 3, 4, 5};
    int i;

    int array1_count = sizeof(array1) / sizeof(array1[0]);
    int array2_count = sizeof(array2) / sizeof(array2[0]);

    /* 現時点でのarray2の全要素を表示 */
    for (i = 0; i < array2_count; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    /* array1の全要素をarray2にコピー */
    for (i = 0; i < array2_count; i++) {
        array2[i] = array1[i];
    }
    
    /* コピー後のarray2の全要素を表示 */
    for (i = 0; i < array2_count; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}

/*
 * 結果を見ると、array1の値がarray2にコピーされていることがわかります。
 */
