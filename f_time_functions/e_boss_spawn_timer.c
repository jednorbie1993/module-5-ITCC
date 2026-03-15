#include <stdio.h>
#include <time.h>

int main()
{
    time_t last_spawn = time(0);
    time_t now;

    while(1)
    {
        now = time(0);

        if(difftime(now, last_spawn) >= 20)
        {
            printf("Boss has spawned!\n");

            last_spawn = now;
        }
    }

    return 0;
}