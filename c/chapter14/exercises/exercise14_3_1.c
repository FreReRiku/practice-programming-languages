/* 問3-1のソースコード */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char full_name[256];    // 名字を先に入力させて、srtcatでフルネームにする
    char first_name[256];   // 名前
    

    printf("名字を入力してください。\n");
    scanf("%s", full_name);
    printf("名前を入力してください。\n");
    scanf("%s", first_name);

    strcat(full_name, first_name);
    printf("あなたのフルネームは %s ですね?\n", full_name);

    return 0;
}
