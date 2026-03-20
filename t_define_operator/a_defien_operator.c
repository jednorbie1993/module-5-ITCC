#include <stdio.h>

#define DEBUG

int main() {

#if defined(DEBUG)
    printf("Debugging enabled\n");
#endif

    return 0;
}

/*reviewed

march 20, 2026

*/