/* knock42.c */

/* 整数値を3つ入力させ、それらの値が小さい順（等しくてもよい）に並んでいるか判定し、小さい順に並んでいる場合はOK、そうなっていない場合はNGと表示するプログラムを作成せよ。 */

#include <stdio.h>

int main(void)
{
    int input_array[3] = {0};

    for (int i = 0; i < 3; i++) {
        printf("%d番目の整数値を入力してください：", i + 1);
        scanf("%d", &input_array[i]);
    }

    if (input_array[0] <= input_array[1] && input_array[1] <= input_array[2]) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}

