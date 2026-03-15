#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;
    struct tm *t;

    now = time(0);
    t = localtime(&now);

    printf("Current hour: %d\n", t->tm_hour);

    if(t->tm_hour >= 6 && t->tm_hour < 18)
    {
        printf("Day time in Wardogz\n");
    }
    else
    {
        printf("Night time in Wardogz\n");
    }

    return 0;
}