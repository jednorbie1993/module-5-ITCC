#include <stdio.h>
#include "calc.h"

int main() {
    int x = 5, y = 3;

    printf("Add: %d\n", add(x, y));
    printf("Square of %d: %d\n", x, square(x));

    // access extern variable
    printf("Global value: %d\n", global_value);

    return 0;
}