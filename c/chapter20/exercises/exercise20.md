# 練習問題20

## 基本知識

### 問1-1

宣言のみを記述するファイルをなんと呼ぶか。

- ヘッダーファイル

### 問1-2

実際のプログラムが記述されたファイルをなんと呼ぶか。

- ソースファイル

## プログラム書取

### 問2-1

以下のプログラムをヘッダーファイルとソースファイルに分離してください。

```c
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

void InputPeople(People* data)
{
    printf("名前:");
    scanf("%s", data->name);
    printf("年齢:");
    scanf("%d", &data->age);
    printf("性別(1-男性、2-女性):");
    scanf("%d", &data->sex);
    printf("\n");
}

void ShowPeople(People data)
{
    char sex[16];

    printf("名前:%s\n", data.name);
    printf("年齢:%d\n", data.age);

    if (data.sex == 1) {
        strcpy(sex, "男性");
    } else {
        strcpy(sex, "女性");
    }

    printf("性別:%s\n", sex);
    printf("\n");
}
```

People.h

```h
/* People.h */
#ifndef __PEOPLE_H__
#define __PEOPLE_H__

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

/* 個人データを入力する */
extern void InputPeople(People* data);

/* 個人データを表示する */
extern void ShowPeople(People data);

#endif
```

People.c

```h
/* People.c */

#include "People.h"
#include <stdio.h>
#include <string.h>

void InputPeople(People* data)
{
    printf("名前:");
    scanf("%s", data->name);
    printf("年齢:");
    scanf("%d", &data->age);
    printf("性別(1-男性、2-女性):");
    scanf("%d", &data->sex);
    printf("\n");
}

void ShowPeople(People data)
{
    char sex[16];

    printf("名前:%s\n", data.name);
    printf("年齢:%d\n", data.age);

    if (data.sex == 1) {
        strcpy(sex, "男性");
    } else {
        strcpy(sex, "女性");
    }

    printf("性別:%s\n", sex);
    printf("\n");
}
```

## 記述式

### 問3-1

すべての関数を1つのソースファイルに記述しても動作するのに、わざわざ分割する理由を簡潔に述べよ。

- 分割することでプログラムの見通しがよくなり、再利用や多人数開発が容易になるから。

