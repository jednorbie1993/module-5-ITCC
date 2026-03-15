/* Functions with a variable argument list */

#include <stdio.h>
#include <stdarg.h>

float average(int num, ...);

int main()
{
    float x;

    x = average(10, 1,2,3,4,5,6,7,8,9,10);
    printf("\nThe first average is %f.", x);

    x = average(5, 121, 206, 76, 31, 5);
    printf("\nThe second average is %f.", x);

    return 0;
}

float average(int num, ...)
{
    va_list arg_ptr;
    int count, total = 0;

    /* initialize argument list */
    va_start(arg_ptr, num);

    /* get each argument */
    for(count = 0; count < num; count++)
    {
        total += va_arg(arg_ptr, int);
    }

    /* clean up */
    va_end(arg_ptr);

    return (float) total / num;
}