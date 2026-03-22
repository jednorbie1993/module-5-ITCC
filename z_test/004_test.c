#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int result = SQUARE(2 + 3); // magiging (2+3)*(2+3) = 25
    printf("Result: %d\n", result);
    return 0;
}

/*
Example Macro (parentheses importance)
*/