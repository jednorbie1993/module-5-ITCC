#include <stdio.h>

// Function prototype
long sqr(int x);

// Function definition
long sqr(int x) {
    return ((long)x * x);
}

int main() {
    int x;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    printf("\nThe square of %d is %ld.\n", x, sqr(x));

    return 0;
}