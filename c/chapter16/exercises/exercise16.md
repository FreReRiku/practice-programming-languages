# 練習問題16

## 基本知識

### 問1-1

複数の異なる型をまとめる方法のことをなんと呼ぶか。

- 構造体

## プログラム書取

### 問2-1

3人分の、名前、年齢、性別、を入力して表示するプログラムを作りなさい。
ただし、データは構造体で記憶することとする。
また、データの入力と表示はそれぞれ専用の関数を作って行うこととする。

```c
#include <stdio.h>

/* データを構造体で記憶する */
typedef struct {
    char name[64];
    int age;
    int gender;
} Person;

/* データの入力と表示はそれぞれ専用の関数を作って行う。 */
int inputPerson(Person * data);
int displayPerson(Person data);

int main(void) {

    /* 3人分ということがあらかじめ指定されているので、要素数を3にして配列を宣言する。 */
    Person data[3];

    /* 入力処理 */
    for (int i = 0; i < 3; i++) {
        inputPerson(&data[i]);
    }

    /* 出力処理 */
    for (int i = 0; i < 3; i++) {
        if (!i) {printf("\n");}
        displayPerson(data[i]);
    }

    return 0;
}

int inputPerson(Person * data)
{
    printf("名前を入力してください。\n");
    scanf("%s", data->name);
    printf("年齢を数字で入力してください。\n");
    scanf("%d", &data->age);
    printf("性別を入力してください。\n");
    printf("男性：1 / 女性：2 / 無回答：0 \n");
    scanf("%d", &data->gender);
    
    return 0;
}

int displayPerson(Person data)
{
    printf("名前：%s\n", data.name);
    printf("年齢：%d\n", data.age);
    if (data.gender == 1) {printf("性別：男性\n");}
    else if (data.gender == 2) {printf("性別：女性\n");}
    else if (data.gender == 0) {printf("性別：無回答\n");}
    else {printf("選択肢以外の数字が入力されました。\n");}

    return 0;
}

```

## 記述式

### 問3-1

別々に変数を宣言しても問題なくデータを記憶できるのに、
わざわざ構造体を使うのはなぜか簡潔に説明せよ。

- 構造体にすることで、関連性のあるデータをまとめて管理することができるから。
