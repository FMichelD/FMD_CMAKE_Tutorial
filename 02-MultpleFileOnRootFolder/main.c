#include "printFunction.h"
#include "doubleFunction.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Tutorial CMake: Multi files.\n");
    printFunction();
    printf("doubleFunction(20) retorna: %d\n", doubleFunction(20));

    printf("\nProgram paused. Press enter to exit.");
    getchar();

    return 0;
}