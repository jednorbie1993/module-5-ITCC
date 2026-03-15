#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, now;
    int seconds = 0;

    start = time(0);

    while(seconds < 10)
    {
        now = time(0);

        if(difftime(now, start) > seconds)
        {
            seconds++;
            printf("%d\n", seconds);
        }
    }

    return 0;
}