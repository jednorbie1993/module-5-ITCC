#include <stdio.h>
#include <string.h>

int main() {
    char message1[60] = "Four score and seven years ago ... ";

    printf("Before memset(): %s\n", message1);
    memset(message1 + 5, '@', 10);  // Set 10 characters starting at index 5
    printf("After memset():  %s\n", message1);

    return 0;
}