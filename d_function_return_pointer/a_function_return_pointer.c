#include <stdio.h>

int larger1(int x, int y);
int *larger2(int *x, int *y);

int main()
{
    int a, b, bigger1;
    int *bigger2;

    printf("Enter two integer values: ");
    scanf("%d %d", &a, &b);

    /* Function returning normal value */
    bigger1 = larger1(a, b);
    printf("\nThe larger value is %d.", bigger1);

    /* Function returning pointer */
    bigger2 = larger2(&a, &b);
    printf("\nThe larger value is %d.\n", *bigger2);

    return 0;
}

/* Returns the larger integer */
int larger1(int x, int y)
{
    if (y > x)
        return y;

    return x;
}

/* Returns pointer to the larger integer */
int *larger2(int *x, int *y)
{
    if (*y > *x)
        return y;

    return x;
}