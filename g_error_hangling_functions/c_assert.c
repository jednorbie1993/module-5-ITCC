#include <stdio.h>
#include <assert.h>

int main()
{
    int x;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    assert(x);  // error kung 0 ang input

    printf("You entered %d\n", x);

    return 0;
}