#include <stdio.h>
#include <stdlib.h>

// compare function
int intcmp(const void *a, const void *b) {
    int element1 = *(int*)a;
    int element2 = *(int*)b;

    if (element1 > element2)
        return 1;
    else if (element1 < element2)
        return -1;
    else
        return 0;
}

int main() {
    int values[5] = {5, 2, 9, 1, 3};
    int i;

    // sort using qsort
    qsort(values, 5, sizeof(int), intcmp);

    printf("Sorted values:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }

    return 0;
}

/*
Is anything wrong with the following compare function?
int intcmp( int element1, int element2)
{
if ( element1 > element 2)
return -1;
else if ( element1 < element2)
return 1;
else
return 0;
}
march 18, 2026
*/