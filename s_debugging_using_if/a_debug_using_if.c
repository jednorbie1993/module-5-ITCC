#include <stdio.h>

#define DEBUG 1

int main() {

#if DEBUG == 1
    printf("Debug Mode ON\n");
#endif

    printf("Program Running...\n");

    return 0;
}