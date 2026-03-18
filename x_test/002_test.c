//What is wrong with the following program? (Fix it)

#include <stdio.h>
#include <stdlib.h>

// compare function
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int values[10], ctr;

    printf("Enter values:\n");

    for (ctr = 0; ctr < 10; ctr++) {
        scanf("%d", &values[ctr]);
    }

    // fixed qsort
    qsort(values, 10, sizeof(int), compare);

    printf("Sorted values:\n");
    for (ctr = 0; ctr < 10; ctr++) {
        printf("%d ", values[ctr]);
    }

    return 0;
}

/*
What is wrong with the following program?
#include <stdio.h>
#include <stdlib.h>
main()
{
int values[10], count, key, *ptr;
printf("Enter values");
for( ctr = 0; ctr < 10; ctr++ )
scanf( "%d", &values[ctr]);
qsort(values, 10, compare_function());
}

*/