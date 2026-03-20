#include <stdio.h>

#define DEBUG 1// palitan mo lang ng 1 and 0 processor directives parin to 

int main() {

#if DEBUG == 1
    printf("Debug Mode ON\n");
#endif

    printf("Program Running...\n");

    return 0;
}

/*
reviewed

march 20, 2026

*/