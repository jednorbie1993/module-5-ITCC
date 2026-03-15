#include <stdio.h>
#include <assert.h>

int main()
{
    int x;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    assert(x);   // kapag 0 si x → error

    printf("You entered %d\n", x);

    return 0;
}