#include <stdio.h>
#include "utility.h"

int main() {
    int x;

    show_message();

    printf("Enter number: ");
    scanf("%d", &x);

    printf("Square: %ld\n", sqr(x));
    printf("Double: %d\n", double_number(x));
    printf("Half: %d\n", HALF(x));

    return 0;
}
//gcc main.c utility.c -o program
//.\program