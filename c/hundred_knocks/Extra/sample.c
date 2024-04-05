#include <stdio.h>

int main(int argc, char *argv[])
{ 
    // argc: argument count
    // argv: argument vector

    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
