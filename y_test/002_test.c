#include <stdio.h>
#include <stdlib.h>

int main() {
    long *ptr;

    ptr = (long*) malloc(1000 * sizeof(long));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("malloc: Memory allocated for 1000 longs.\n");

    free(ptr); // important!
    return 0;
}

//SEPARATE COMPLETE CODE — malloc() Example

/*
malloc = gawa space (madumi) mabilis
calloc = gawa space (malinis) mekabagalan
realloc = resize space note need ng malloc at calloc kapag may realloc
*/