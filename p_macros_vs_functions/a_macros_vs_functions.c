#include <stdio.h>

// Macro
#define SQUARE(x) ((x) * (x))

// Function
int squareFunc(int x) {
    return x * x;
}

int main() {
    int num = 5;

    printf("Using Macro: %d\n", SQUARE(num));
    printf("Using Function: %d\n", squareFunc(num));

    return 0;
}