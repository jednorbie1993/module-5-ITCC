#include <stdio.h>
#include <stdarg.h>

float damage_average(int hits, ...);

int main()
{
    float dmg;

    printf("=== Wardogz Battle ===\n");

    dmg = damage_average(3, 30, 25, 35);

    printf("Jamber Combo Hits: 3\n");
    printf("Average Damage: %.2f\n", dmg);

    return 0;
}

float damage_average(int hits, ...)
{
    va_list arg_ptr;
    int i;
    int total = 0;

    va_start(arg_ptr, hits);

    for(i = 0; i < hits; i++)
    {
        total += va_arg(arg_ptr, int);
    }

    va_end(arg_ptr);

    return (float)total / hits;
}

/*
fix name:

va_list
va_start
va_arg
va_end

#include <stdarg.h> = hindi na pede palitan yan 
*/