#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, now;

    printf("Dungeon started!\n");

    start = time(0);

    while(1)
    {
        now = time(0);

        if(difftime(now, start) >= 30)
        {
            printf("Time up! Dungeon failed!\n");
            break;
        }
    }

    return 0;
}