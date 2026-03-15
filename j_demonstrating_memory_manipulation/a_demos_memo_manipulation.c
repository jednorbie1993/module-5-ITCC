/* Demonstrating memset(), memcpy(), and memmove() */

#include <stdio.h>
#include <string.h>

int main()
{
    char message1[60] = "Four score and seven years ago ... ";
    char message2[60] = "abcdefghijklmnopqrstuvwxyz";
    char temp[60];

    // Using memset()
    printf("message1[] before memset():\t%s\n", message1);
    memset(message1 + 5, '@', 10); // Set 10 characters starting at index 5 to '@'
    printf("message1[] after memset():\t%s\n", message1);

    // Using memcpy() without overlap
    strcpy(temp, message2); // Copy message2 to temp
    printf("\nOriginal message: %s\n", temp);
    memcpy(temp + 4, temp + 16, 10); // Copy 10 bytes from index 16 to index 4
    printf("After memcpy() without overlap:\t%s\n", temp);

    // Using memcpy() with overlap
    strcpy(temp, message2); // Reset temp
    memcpy(temp + 6, temp + 4, 10); // Copy 10 bytes from index 4 to index 6
    printf("After memcpy() with overlap:\t%s\n", temp);

    // Using memmove() without overlap
    strcpy(temp, message2); // Reset temp
    printf("\nOriginal message: %s\n", temp);
    memmove(temp + 4, temp + 16, 10); // Copy 10 bytes from index 16 to index 4
    printf("After memmove() without overlap:\t%s\n", temp);

    // Using memmove() with overlap
    strcpy(temp, message2); // Reset temp
    memmove(temp + 6, temp + 4, 10); // Copy 10 bytes from index 4 to index 6
    printf("After memmove() with overlap:\t%s\n", temp);

    return 0;
}