#include <stdio.h>
#include <stdlib.h>

int main() {
    long *ptr;

    ptr = (long*) calloc(1000, sizeof(long));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("calloc: Memory allocated and initialized to 0.\n");

    free(ptr); // important!
    return 0;
}
//SEPARATE COMPLETE CODE — calloc() Example

/*
malloc = gawa space (madumi) mabilis
calloc = gawa space (malinis) mekabagalan
realloc = resize space note need ng malloc at calloc kapag may realloc
*/