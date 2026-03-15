#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // or use <stdio.h> only if getch() is unavailable

#define MAX 20

// Comparison function for integers
int intcmp(const void *v1, const void *v2) {
    return (*(int *)v1 - *(int *)v2);
}

int main() {
    int arr[MAX], count, key, *ptr;

    printf("Enter %d integer values; press Enter after each:\n", MAX);
    for (count = 0; count < MAX; count++) {
        scanf("%d", &arr[count]);
    }

    puts("Press a key to sort the values.");
    getch();

    // Sort the array
    qsort(arr, MAX, sizeof(arr[0]), intcmp);

    // Display the sorted array
    for (count = 0; count < MAX; count++)
        printf("arr[%d] = %d\n", count, arr[count]);

    puts("Press a key to continue.");
    getch();

    // Search for a value
    printf("Enter a value to search for: ");
    scanf("%d", &key);

    ptr = (int *)bsearch(&key, arr, MAX, sizeof(arr[0]), intcmp);

    if (ptr != NULL)
        printf("%d found at arr[%ld].\n", key, ptr - arr);
    else
        printf("%d not found.\n", key);

    return 0;
}