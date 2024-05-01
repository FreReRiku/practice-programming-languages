// Notice: 基本型の説明をメインに書いているため、実行は出来ません。

#include <iostream>

int main()
{
    /**基本型 **/
    // C++ではじめから使用できる基本型についての説明

    /* bool */
    // boolは真偽値を表す型でtrueまたはfalseが設定できます。
    bool ok = true;

    /* char */
    // charはアスキー文字1文字を表現する型です。ただし内部表現はアスキーコードの整数値として扱われ、標準出力などに出力する際に文字に変換されて出力されます。
    char a = 'a';


    /** 数値 **/
    // 数値を表現する型は複数種類用意されています。

    /* 整数型 */
    // 整数を表現するための型です。以下の型が用意されています。

    /*
     * char
     * short
     * int
     * long
     */

    // 下に行くにつれて大きな値が表現できるようになり、変数のサイズも増大します。具体的なサイズはコンパイラによって変わってきますが、GCCでは8, 16, 32, 64ビットで定義されています。一般的にはintが使用されます。

    /* 符号付き_符号なし整数型 */
    // 各整数型にunsignedを付けると正の数しか表現できなくなる代わりに大きな値が表現できるようになります。

    unsigned int b = 4000000000;
    // signedを付けると正負両方の値が表現できます。明示的につけなくてもデフォルトはsignedになります。

    /* サイズ指定付き整数型 */
    // 上述の整数型は型のサイズがコンパイラによってまちまちなので複数のコンパイラに対応するプログラムを書くときは移植性の面で問題が発生することがあります。そのようなときはサイズ指定付き整数型を使用します。

    /*
     * std::int8_t
     * std::int16_t
     * std::int32_t
     * std::int64_t
     * std::uint8_t
     * std::uint16_t
     * std::uint32_t
     * std::uint64_t
     */

    // 数値は型のビットサイズを表しており、uはunsignedを表しています。サイズ指定付き整数型を使用する場合は#include <cstdint> と記述する必要があります。

    /*
     * #include <cstdint>
     * std::int32_t x = 5;
     */

    /* 浮動小数点型 */
    // 小数を表現する型は次の2つの型があります。
    /*
     * float
     * double
     */

    // floatは32bitの大きさを持ち、doubleは64bitの大きさを持ちます。
    // doubleはfloatに比べて計算精度が高いですが数値計算のパフォーマンスは低いです。

    /* 列挙型 */
    // 列挙型は、名前を就けた定数（列挙子）の集合を扱う型です。

    /* 列挙型:enum */
    // 列挙型であるenumを定義するには次のようにします。

    enum Day {
        Sun, // 0
        Mon, // 1
        Tue, // 2
        Wed, // 3
        Thu, // 4
        Fri, // 5
        Sat  // 6
    };

    // enumの各列挙子は、内部では整数として扱われています。各列挙子の定義の際に値を指定しなければ、0から順に値が割り振られます。
    // 「列挙子 = 整数」と書くことで値を指定することができます。値が指定された列挙子以降は、順に整数が割り振られます。

    enum Day_2 {
        Sun = 1, // 1
        Mon,     // 2
        Tue,     // 3
        Wed = 8, // 8
        Thu,     // 9
        Fri,     // 10
        Sat      // 11
    };

    // enumを扱うには次のようにします。
    Day day = Fri;

    // 整数値にenumの値を代入することは可能ですが、enumに数値を直接代入することは出来ません。

    int x = Fri;
  //Day day = 5 ← エラー
    
    // 列挙子の名前は被らないようにする必要があります。

    /* 
    **エラー例**
    enum Day {
        Sun,
        Mon, 
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };

    enum SolarSystem {
        Sun, ← Sun はenum Day 内で定義済みのためコンパイルエラーとなる。
        Mercury,
        Venus,
    };
    **エラー例ここまで**
    */
    
    /* enum class */
    // enum class で列挙型を定義することもできます。

    enum class Day {
        Sun,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };

    // 基本的にはenumと同じですが、以下の点が異なります。
    // enum classを扱うには、「型名::列挙子名」とします。

    Day day = Day::Fri; // OK
 // Day day = Fri; ← コンパイルエラーとなる。

    // 明示的に型変換をしない限り、数値型にenum classの値の代入は出来ません。

 // int x = Day::Fri;  ←コンパイルエラー

    // 明示的な型変換を行うことで、数値型などにenum classの値の代入が可能です。
    int x = static_cast<int>(Day::Fri);


    // enum classの場合、列挙子の名前は型ごとに区別されるため、他の列挙型の列挙子と名前が被っても問題ありません。

    enum class Day_3 {
        Sun, // Day::Sun
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };

    enum class SolarSystem_2 {
        Sun, // Day::SunとSolarSystem::Sun は区別されるためOK
        Mercury,
        Venus,
        Earth,
        Mars,
        Jupiter,
        Saturn,
        Uranus,
        Neptune
    };

}
