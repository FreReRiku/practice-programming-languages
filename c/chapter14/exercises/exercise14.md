# 練習問題13

## 基本知識

### 問1-1

各文字に各々の番号を付けることで区別する方法をなんと呼ぶか。

- 文字コード

### 問1-2

文字列の終わりを表す特別な文字のことをなんと呼ぶか。

- EOS (End Of String) もしくは 終端文字。\0 と表される。

## プログラム読取

### 問2-1

次のプログラムを実行するとどのように表示されるか答えよ。

```c
#include <stdio.h>

int main(void)
{
    char C;

    for (C = 'A'; C <= 'Z'; C++) {
        printf("%C", C);
    }
    printf("\n");

    return 0;
}
```

大文字のAからZを一列に表示し、Zまで表示させたら改行される。

## プログラム書取

### 問3-1

名字と名前を別々に入力させて、それを結合して表示するプログラムを答えよ。

```c
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

```

## 記述式

### 問4-1

C言語では文字列の取り扱いに配列を使うのはなぜか簡潔に説明せよ。

- 文字列はものによって長さが変わるため、長さを変えることができる配列を利用している。
