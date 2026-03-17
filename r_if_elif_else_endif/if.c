#include <stdio.h>

#define ENGLAND 0
#define FRANCE 1
#define ITALY 0

int main() {

#if ENGLAND == 1
    printf("England version\n");

#elif FRANCE == 1
    printf("France version\n");

#elif ITALY == 1
    printf("Italy version\n");

#else
    printf("USA version\n");
#endif

    return 0;
}