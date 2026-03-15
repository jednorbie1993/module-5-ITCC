#include <stdio.h>

void addTen(void *x, char type)
{
    switch(type)
    {
        case 'i':
            *((int *)x) += 10;
            break;

        case 'f':
            *((float *)x) += 10;
            break;

        case 'd':
            *((double *)x) += 10;
            break;
    }
}

int main()
{
    int a = 5;
    float b = 3.5;
    double c = 7.25;

    printf("Before:\n");
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %lf\n\n", c);

    addTen(&a, 'i');
    addTen(&b, 'f');
    addTen(&c, 'd');

    printf("After:\n");
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %lf\n", c);

    return 0;
}