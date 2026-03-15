#include <stdio.h>
#include <string.h>

int main() {
    char message2[60] = "abcdefghijklmnopqrstuvwxyz";
    char temp[60];

    // Without overlap
    strcpy(temp, message2);
    printf("Original: %s\n", temp);
    memmove(temp + 4, temp + 16, 10);
    printf("After memmove() without overlap: %s\n", temp);

    // With overlap
    strcpy(temp, message2);
    memmove(temp + 6, temp + 4, 10);
    printf("After memmove() with overlap:    %s\n", temp);

    return 0;
}