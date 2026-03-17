#include <stdio.h>
#include "myfile.h"

void greet() {
    printf("Hello from header!\n");
}

int main() {
    greet();
    return 0;
}