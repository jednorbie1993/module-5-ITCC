#include <stdio.h>
#include <time.h>

int main()
{
    int stamina = 50;
    int max_stamina = 100;

    time_t last_regen = time(0);
    time_t now;

    while(stamina < max_stamina)
    {
        now = time(0);

        if(difftime(now, last_regen) >= 5)
        {
            stamina += 10;

            if(stamina > max_stamina)
                stamina = max_stamina;

            printf("Stamina regenerated! Current stamina: %d\n", stamina);

            last_regen = now;
        }
    }

    printf("Stamina fully restored!\n");

    return 0;
}