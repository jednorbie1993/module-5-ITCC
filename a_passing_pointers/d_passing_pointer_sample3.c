#include <stdio.h>

void attack(int *enemy_health);

int main()
{
    int enemy_health = 100;

    attack(&enemy_health);

    printf("Enemy health: %d\n", enemy_health);

    return 0;
}

void attack(int *enemy_health)
{
    *enemy_health -= 30;
}