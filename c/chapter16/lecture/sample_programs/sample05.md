# sample05.md

## sample04.cのつづき

今までは、構造体タグを宣言してから構造体を使用していました。
この場合、構造体を使う時は、必ずstructが必要になります。
しかし、構造体タグを、新しい型として1度に宣言してしまう方法があります。

C言語では、新しい型を宣言するtypedef(タイプデフ)が用意されています。
詳しい説明はあとでしますが、次にようにtypedefを使うと新しい型を宣言することができます。

```c
typedef 新しい型の形 新しい型名
```

これを利用すると、構造体タグを直接新しい型にできます。
次のプログラムは、構造体タグを元に新しい型を作る例です。

```c
struct student_tag
{
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
};

typedef struct student_tag student;
```

この例では、student_tagタグを、student型にできます。
こうすれば、構造体変数を宣言する時に、structが不要になります。
今後、先ほどの方法で宣言された型を、構造体型と呼ぶことにします。

構造体型にすることで、型と同様に扱えるため、便利なのですが、
毎回typedefを使って型を定義するのは面倒です。
より簡単にするために、構造体タグと構造体型を同時に宣言してしまうことができます。

```c
typedef struct student_tag
{
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
} student;
```

さらに、この場合には、構造体タグを省略できます。

```c
typedef struct
{
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
} student;
```

この方法が、1番簡潔に構造体型を宣言できます。
現在では上記の形がほぼ慣用句となっておりますので、
この形で覚えてしまっていいと思います。
