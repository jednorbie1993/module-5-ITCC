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
/*
void take_damage(int *health)
void heal(int *health)
void gain_xp(int *xp)
void level_up(int *level)

update position
change health
change score
inventory
stats

dog_health
dog_stamina
dog_level
dog_xp

*/