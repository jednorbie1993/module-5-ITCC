#include <stdio.h>

int main(void) {
    int i1 = 100, i2 = 40;
    float f1;

    // Without casting: fraction lost
    f1 = i1 / i2;
    printf("Without casting: f1 = %f\n", f1);

    // With casting: fraction preserved
    f1 = (float)i1 / i2;
    printf("With casting: f1 = %f\n", f1);

    return 0;
}