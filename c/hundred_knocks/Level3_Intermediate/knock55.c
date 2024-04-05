/* 夢想花again */

#include <stdio.h>

int main(int argc, char *argv[])
{
    //3回繰り返したい
    for (int i = 0; i < 3; i++) {
        //「とんで」を9回繰り返す
        for (int j = 0; j < 9; j++) {
            printf("とんで");
        }
        // 「まわって」を3回繰り返す
        for (int j = 0; j < 3; j++) {
            printf("まわって");
        }
        // 「まわる」を1回出力し、改行する
        printf("まわる\n");
    }
}
