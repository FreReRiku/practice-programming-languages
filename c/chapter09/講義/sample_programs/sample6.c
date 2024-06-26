/* sample6.c */

/* 強制脱出
 * ユーザーが明示的にプログラムの終了を選ばない限り、プログラムを終わらせないようにしたいときには、無限ループを使うことを説明しました。
 * しかし、先程のプログラムでは、ユーザーの入力に応じて、プログラムを終了するための手段が用意されていませんでした。
 * ユーザーの入力値が、特定の値だった場合に、for文を終わらせてしまうようにすれば、ユーザーの入力によって終わるようにできます。
 * for文は条件式が偽になったときに終了するようにするのが普通ですが、実は、勝手にfor文を終わらせてしまうこともできます。
 * それにはbreak文を使います。
 * 
 * for文の中でbreak文が実行されると、for文は強制的に終了され、カウント変数はその時点の値のままとなります。
 * 次のプログラムは、break文でループを終了させる例です。
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 9; i++) {
        printf("%d\n", i);
        if (i % 3 == 0) {
            break;
        }
    }
    
    return 0;
}

/*
 * 条件式を見ると10回表示するまでは終わらないはずなのですが、3回表示した時点で終了しています。
 * これは、3回目のiの値が3になり、if文の次のbreak文が実行されたためです。
 * break文はfor文の条件と同時に使用することができるので、ユーザーの入力によって終わらせるため、繰り返し途中にエラーが発生した等、
 * 繰り返し回数が完了する前に終了することができます。
 */
