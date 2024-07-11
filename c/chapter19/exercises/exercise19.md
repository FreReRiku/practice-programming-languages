# 練習問題19

## 基本知識

### 問1-1

プログラムの実行中に自由に作ることができる配列をなんと呼ぶか。

- 動的配列

### 問1-2

長期的に使用される、サイズの大きなメモリ領域のことをなんと呼ぶか。

- ヒープ

## プログラム読取

次のプログラムには大きな問題点がある。
それはどのような問題なのか簡潔に説明せよ。

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int * data;

    data = (int *)malloc(sizeof(int) * 10);

    return 0;
}
```

- malloc関数を使用した後にfree関数を用いて動的配列を開放していない点。

## プログラム書取

### 問3-1

練習問題16の、「3人分の、名前、年齢、性別、を入力して表示するプログラムを作りなさい。
ただし、データは構造体で記憶することととし、また、データの入力と表示はそれぞれ専用の関数を
作って行うこととする。」という問題を元に、何人分でも入力できるように改造しなさい。
なお、年齢に-1が入力されれば入力終了とする。
※配列番号がint型なのでint型の最大値まで扱えれば良い。

```c
/* exercise19_3_1.c */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* データを構造体で記憶する */
typedef struct {
    char name[64];
    int age;
    int gender;
} Person;

/* データの入力と表示はそれぞれ専用の関数を作って行う */
void inputPerson(Person * data);
void displayPerson(Person data);

int main(void) {

    int count;
    int datasize;
    Person * data;

    datasize = 10;
    data = (Person *)malloc(sizeof(Person) * datasize);

    count = 0;

    while (1) {
        inputPerson(&data[count]);
        if (data[count].age == -1) {
            break;
        }

        count++;

        if (count >= datasize) {
            datasize += 10;
            data = (Person *)realloc(data, sizeof(Person) * datasize);
        }
    }

    for (int i = 0; i < count; i++) {
        if (i) {printf("\n");}
        displayPerson(data[i]);
    }

    free(data);

    return 0;

}

void inputPerson(Person * data)
{
    printf("名前を入力してください。\n");
    scanf("%s", data->name);
    printf("年齢を入力してください。\n");
    scanf("%d", &data->age);
    printf("性別を入力してください。(男性：1、女性：2) \n");
    scanf("%d", &data->gender);
    printf("\n");
}

void displayPerson(Person data)
{
    char gender_char[64];

    printf("名前：%s\n", data.name);
    printf("年齢：%d\n", data.age);

    if (data.gender == 1) {
        strcpy(gender_char, "男性");
    } else if (data.gender == 2) {
        strcpy(gender_char, "女性");
    } else {
        strcpy(gender_char, "1, 2以外の回答が入力されました。");
    }

    printf("性別：%s\n", gender_char);
}

```

## 記述式

### 問4-1

通常の配列を使えばデータの格納はできるのに、あえて動的配列を使うのはなぜか簡潔に説明せよ。

- 要素数をプログラム実行中に自由に決められるため、メモリを効率良く扱えるから。

