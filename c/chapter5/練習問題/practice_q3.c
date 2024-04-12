#include <stdio.h>

int main(void)
{
    int juice = 198;
    int milk = 138;
    int money = 1000;
    double tax = 0.05;
    int change;

    int total = juice + milk * 2;
    double total_with_tax = total * (1 + tax);
    
    change = money - (int)total_with_tax;

    printf("%d円\n", change);

    return 0;
}
