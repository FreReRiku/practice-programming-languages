/*
* また、区切る記号を指定して入力させることも可能です。
* この場合は、2つの指定子の間に、区切る記号を指定します。
* 次のプログラムは、, で区切って2つの数値を入力させます。
*/

#include <stdio.h>

int main(void)
{
    int data1, data2;
    scanf("%d, %d", &data1, &data2); /* 入力部分 */
    printf("%d, %d\n", data1, data2);

    return 0;
}

/*
* 今回は、入力する時には「,」で区切って入力することになります。
* その代わり、スペースなどで区切れなくなるので、注意が必要です。　
*/
