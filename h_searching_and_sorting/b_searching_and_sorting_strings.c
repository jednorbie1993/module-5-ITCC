#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

// Comparison function for strings
int comp(const void *s1, const void *s2) {
    return strcmp(*(char **)s1, *(char **)s2);
}

int main() {
    char *data[MAX], buf[80];
    char *key, **key1, *ptr;
    int count;

    // Input words
    printf("Enter %d words, pressing Enter after each:\n", MAX);
    for (count = 0; count < MAX; count++) {
        printf("Word %d: ", count + 1);
        fgets(buf, sizeof(buf), stdin);
        buf[strcspn(buf, "\n")] = 0; // remove newline
        data[count] = malloc(strlen(buf) + 1);
        strcpy(data[count], buf);
    }

    // Sort words
    qsort(data, MAX, sizeof(data[0]), comp);

    // Display sorted words
    for (count = 0; count < MAX; count++)
        printf("%d: %s\n", count + 1, data[count]);

    // Search for a word
    printf("\nEnter a search key: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = 0; // remove newline
    key = buf;
    key1 = &key;

    ptr = (char *)bsearch(key1, data, MAX, sizeof(data[0]), comp);

    if (ptr != NULL)
        printf("%s found.\n", buf);
    else
        printf("%s not found.\n", buf);

    // Free memory
    for (count = 0; count < MAX; count++)
        free(data[count]);

    return 0;
}