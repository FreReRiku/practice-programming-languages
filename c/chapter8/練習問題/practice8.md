# 練習問題8

## 基本知識

### 問1-1

条件が偽のときに実行する文をif文に追加するオプションは何か。

- else文

### 問1-2

上記の文をいくつも組み合わせて使う書き方を俗になんと呼ぶか。

- else-if文

### 問1-3

番号別に処理する文を分けたいときに使う文は何か。

- switch文 あるいは switch文~case文

## プログラム読取

次のプログラムは、何を表示するためのプログラムなのか、処理内容や変数名から判断して答えよ。

```c
#include <stdio.h>

int main(void)
{
    int year;

    scanf("%d", &year);

    if (year % 2 == 0) {
        if (year % 4 == 0) {
            printf("summer\n");
        } else {
            printf("winter\n");
        }
    } else {
        printf("do not\n");
    }

    return 0;
}
```

- 西暦年を入力すると、オリンピックが開かれるかどうか表示する。

## プログラム書取

### 問3-1

月を入力すると、対応する陰暦の月を表示するプログラムを作成せよ。
なお、存在しない月を入力した時にも何かのメッセージを表示せよ。

ヒント: 陰暦は1月から順番に
睦月、如月、弥生、卯月、皐月、水無月、文月、葉月、長月、神無月、霜月、師走

Answer

```c
#include <stdio.h>

int main(void)
{
    int month;
    printf("月を入力してください：");

    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("睦月\n");
            break;
        case 2:
            printf("如月\n");
            break;
        case 3:
            printf("弥生\n");
            break;
        case 4:
            printf("卯月\n");
            break;
        case 5:
            printf("皐月\n");
            break;
        case 6:
            printf("水無月\n");
            break;
        case 7:
            printf("文月\n");
            break;
        case 8:
            printf("葉月\n");
            break;
        case 9:
            printf("長月\n");
            break;
        case 10:
            printf("神無月\n");
            break;
        case 11:
            printf("霜月\n");
            break;
        case 12:
            printf("師走\n");
            break;
        default:
            printf("そんな月はありません。\n");
            break;
    }

    return 0;
}
```

## 記述式

switch文では各case文の後にbreak文を置くのはなぜか。
また、これが不要なのはどんな場合か簡潔に述べよ。

- switch文は、対応する番号のcase文までジャンプする機能しかないため、break文を付けて、各case文の終わりでswitch文全体から抜け出るようにする必要がある。しかし、各case文の処理に共通点がある場合に限り、そのままつなげても良い。
