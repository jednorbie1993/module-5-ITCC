#include <stdio.h>
#include "prog.h"

void show() {
    printf("Hello from header!\n");
}

int main() {
    show();
    return 0;
}