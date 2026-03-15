#include <stdio.h>
#include <stdlib.h>

struct kilo {
    struct kilo *next;
    char dummy[1022];  // 1022 bytes + 2 bytes pointer ≈ 1 KB
};

int FreeMem(void);

int main() {
    printf("You have %d kilobytes free.\n", FreeMem());
    return 0;
}

int FreeMem(void) {
    int counter = 0;
    struct kilo *head, *current, *nextone;

    current = head = (struct kilo*) malloc(sizeof(struct kilo));
    if (head == NULL) return 0;  // No memory available

    counter = 1;
    while ((current->next = (struct kilo*) malloc(sizeof(struct kilo))) != NULL) {
        current = current->next;
        counter++;
    }

    // Free all allocated memory
    current = head;
    while (current != NULL) {
        nextone = current->next;
        free(current);
        current = nextone;
    }

    return counter;
}