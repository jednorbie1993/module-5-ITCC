/* Wardogz battle damage analyzer using variable arguments */

#include <stdio.h>
#include <stdarg.h>

float damage_average(int num, ...);

int main()
{
    float dmg;

    printf("=== Wardogz Battle Report ===\n");

    /* Jamber attacks */
    dmg = damage_average(3, 30, 25, 35);
    printf("Jamber average damage: %.2f\n", dmg);

    /* Kane attacks */
    dmg = damage_average(5, 40, 50, 45, 30, 35);
    printf("Kane average damage: %.2f\n", dmg);

    /* Lancelot boss attacks */
    dmg = damage_average(4, 80, 95, 100, 85);
    printf("Boss Lancelot average damage: %.2f\n", dmg);

    return 0;
}

float damage_average(int num, ...)
{
    va_list arg_ptr;
    int count;
    int total = 0;

    /* start reading variable arguments */
    va_start(arg_ptr, num);

    for(count = 0; count < num; count++)
    {
        total += va_arg(arg_ptr, int);
    }

    /* clean up */
    va_end(arg_ptr);

    return (float) total / num;
}