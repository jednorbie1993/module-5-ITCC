#include <stdio.h>

int main() {
    int i = 5;
    float f = 2.3;

    // Automatic promotion in expression
    float result = i + f;  // i promoted to float automatically
    printf("Automatic promotion: i + f = %f\n", result);

    // Conversion by assignment
    i = f;  // f is demoted to int, fractional part lost
    printf("After assignment i = f: i = %d\n", i); // d% kasi kaya hnd kasama ung butal

    return 0;
}