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

/*
reviewed 

march 19, 2026

*/

/*
In programming, preprocessor directives like #if, #elif, #else, 
and #endif are used to control which parts of the code will be included before 
the program is compiled. This allows developers to create different versions of a program 
from a single codebase. For example, a developer can define whether the program is intended 
for a Japanese or USA version by setting specific values using #define.

Once a version is selected, the compiler removes all other unused code and keeps only
 the chosen version. This means the final program will only contain the code for that 
 specific configuration. As a result, when the program is distributed—whether through a 
 CD, installer, or download—the user can only access the version that was built by the developer.

This approach is commonly used in software development for handling regional versions,
 debugging modes, and feature control. It ensures efficiency, reduces unnecessary code 
 in the final program, and allows developers to manage multiple versions easily.
*/

/*
Sa programming, ang preprocessor directives tulad ng #if, #elif, #else, at #endif ay ginagamit
 para kontrolin kung aling bahagi ng code ang isasama bago pa i-compile ang program. Dahil dito,
  pwedeng gumawa ang developer ng iba't ibang version ng iisang program gamit lang ang isang codebase.
   Halimbawa, pwedeng pumili kung Japan version o USA version ang gagawin gamit ang #define.

Kapag napili na ang isang version, tatanggalin ng compiler ang lahat ng hindi kailangan at iiwan 
lang ang napiling code. Ibig sabihin, ang final program ay iisa lang ang laman na version. Kaya 
kapag na-distribute na ito—halimbawa sa CD, installer, o download—yun lang ang makikita at magagamit 
ng user.

Karaniwang ginagamit ito sa paggawa ng regional versions, debug mode, at pag-control ng features.
 Nakakatulong ito para maging mas malinis, mas efficient ang program, at mas madaling i-manage ang 
 iba't ibang version ng software.
*/
