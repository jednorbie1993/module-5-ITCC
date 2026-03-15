#include <stdio.h>
#include <time.h>

int main()
{
    time_t death_time, now;

    printf("Player died!\n");

    death_time = time(0);

    while(1)
    {
        now = time(0);

        if(difftime(now, death_time) >= 10)
        {
            printf("Player respawned!\n");
            break;
        }
    }

    return 0;
}