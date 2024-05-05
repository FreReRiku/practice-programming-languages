#include <iostream>

int main()
{
    /* 参照 */
    // ポインタに似た仕組みとして参照があります。
    int x = 100;
    int * p = &x;   // pはポインタ型
    int & r = x;    // rは参照型

    * p = 200;
    r   = 200;

    // int & と書くとintの参照型となります。
    // ポインタが指し示す値を扱うには、*を付けてデリファレンスする必要がありますが、参照では何も付与する必要がないため見た目上では値型のように扱うことができます。
    
}
