/** literals **/
// ソースコードの中に記述される定数値のことをリテラルといいます。
// 本項では整数リテラルについて紹介します。

/* 整数リテラル */
// 数字の先頭に特定の文字を加えることで整数の基数を変えることが出来ます。

#include <iostream>

int main()
{
	// 変数宣言
	int decimal_a 		= 26; 	// 10進整数リテラル
	int octal_b 		= 032; 	// 先頭に0を付けると8進整数リテラル
	int hexadecimal		= 0x1a;	// 先頭に0xを付けると16進整数リテラル
	int hexadecimal_2	= 0x1A;	// 16進整数リテラル内の文字は小文字でも大文字でも区別されないので0x1aと同じ
	
	// 画面出力
	std::cout << decimal_a << std::endl;
	std::cout << octal_b << std::endl;
	std::cout << hexadecimal << std::endl;
	std::cout << hexadecimal << std::endl;
	
	//--------------------------------------------------------------------------------------------
	
	// 数字の末尾に文字を加えることで次のような型を表現できます。
	// 画面出力
	
	std::cout << 26u << std::endl;		// unsigned型の26
	std::cout << 26l << std::endl;		// long型の26
	std::cout << 26ul << std::endl;		// unsigned long型の26
	std::cout << 0x1Aul << std::endl;	// unsigned long型の0x1A
		
}
