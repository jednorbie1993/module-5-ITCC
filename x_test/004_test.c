#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30
#define MAX_LEN 50

// compare function for strings
int compare(const void *a, const void *b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    char names[SIZE][MAX_LEN];
    int i;

    printf("Enter 30 names:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%s", names[i]);
    }

    qsort(names, SIZE, sizeof(names[0]), compare);

    printf("\nSorted names:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

//Write a program that accepts 30 names and sorts them using qsort().
//reviewed march 18, 2026