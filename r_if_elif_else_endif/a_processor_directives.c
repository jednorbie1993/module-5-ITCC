#include <stdio.h>

// Pili ka lang ng value (0 = OFF, 1 = ON)
#define DEBUG 1

// Pili ng version
#define VERSION_USA 0
#define VERSION_JAPAN 1

int main() {

    // Debug messages (pang developer lang)
#if DEBUG == 1
    printf("Debug Mode ON\n");
    printf("Checking system...\n");
#endif

    // Version ng app
#if VERSION_USA == 1
    printf("Welcome!\n");

#elif VERSION_JAPAN == 1
    printf("ようこそ!\n");

#else
    printf("Default version\n");
#endif

    printf("Program running...\n");

    return 0;
}

/*
Step-by-step:

#if ENGLAND == 1 → ❌

#elif FRANCE == 1 → ✅ (STOP na dito)

#elif ITALY == 1 → ❌ di na aabot

#else → ❌ di na rin aabot

Parang tanong:

#if → “ikaw ba si Juan?”

#elif → “eh ikaw si Pedro?”

#elif → “eh ikaw si Maria?”

#else → “ah wala ka sa list, iba ka pala”

#elif = may condition (another check)
#else = default (pag wala nang tumama)

*/