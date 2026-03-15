#include <stdio.h>
#include <string.h>

int main() {
    char message2[60] = "abcdefghijklmnopqrstuvwxyz";
    char temp[60];

    // Without overlap
    strcpy(temp, message2);
    printf("Original: %s\n", temp);
    memcpy(temp + 4, temp + 16, 10);
    printf("After memcpy() without overlap: %s\n", temp);

    // With overlap
    strcpy(temp, message2);
    memcpy(temp + 6, temp + 4, 10);
    printf("After memcpy() with overlap:    %s\n", temp);

    return 0;
}
// 4 location 16 ung pinakuhanan 10 is ung dami 