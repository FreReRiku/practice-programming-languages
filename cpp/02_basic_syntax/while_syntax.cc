/* whileとdo-while */
#include <iostream>

int main()
{
    /* while */
    // whileは()に渡された条件がtrueである限りwhile文内の処理を実行し続けます。

    int x = 5;
    bool done = false;

    while (!done) {
        x += x - 3;
        std::cout << x << std::endl;

        if (x % 5 == 0) {
            done = true;
        }
    }

    /* do-while */
    // do-while文は最初の1回は無条件でdo文内の処理を実行し、2回目以降はwhile()に渡された条件がtrueである限り、do文内の処理を実行し続けます。
    
    int y = 5;
    bool done_2 = false;

    do {
        y += y -3;
        std::cout << y << std::endl;
        
        if (y % 5 == 0) {
            done_2 = true;
        }
    } while (!done_2);
}
