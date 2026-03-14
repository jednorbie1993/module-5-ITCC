#include <stdio.h>

void take_damage(int *health);

int main()
{
    int health = 100;

    take_damage(&health);

    printf("Dog health: %d\n", health);

    return 0;
}

void take_damage(int *health)
{
    *health = *health - 20;
}