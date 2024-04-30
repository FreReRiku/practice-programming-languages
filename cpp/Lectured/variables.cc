#include <iostream>
#include <typeinfo>

int main()
{
    // 変数について
    unsigned int x0 = 5;
    unsigned x1 = 5;

    std::cout << "typeid(x0).name() == " << typeid(x0).name() << std::endl;
    std::cout << "typeid(x1).name() == " << typeid(x1).name() << std::endl;


}
