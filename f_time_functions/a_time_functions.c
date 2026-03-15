/* Demonstrates the time functions */

#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, finish, now;
    struct tm *ptr;
    char *c, buf1[80];
    double duration;

    /* Record start time of program */
    start = time(0);

    /* Get current time */
    time(&now);

    /* Convert time_t to tm structure */
    ptr = localtime(&now);

    /* Display current time using asctime */
    c = asctime(ptr);
    puts(c);

    /* Format time using strftime */
    strftime(buf1, 80, "This is week %U of the year %Y", ptr);
    puts(buf1);

    strftime(buf1, 80, "Today is %A, %x", ptr);
    puts(buf1);

    strftime(buf1, 80, "It is %M minutes past hour %I.", ptr);
    puts(buf1);

    /* Get finish time */
    finish = time(0);

    /* Calculate program duration */
    duration = difftime(finish, start);

    printf("\nProgram execution time = %f seconds\n", duration);

    /* Using clock() */
    printf("Program execution time = %ld hundredths of sec\n", clock());

    return 0;
}