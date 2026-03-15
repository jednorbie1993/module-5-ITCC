#include <stdio.h>

void buff(void *stat, char type, int value)
{
    switch(type)
    {
        case 'i':
            *((int *)stat) += value;
            break;

        case 'f':
            *((float *)stat) += value;
            break;
    }
}

int main()
{
    int hp = 100;
    int attack = 30;
    float speed = 2.5;

    buff(&hp, 'i', 50);       // potion
    buff(&attack, 'i', 10);   // weapon buff
    buff(&speed, 'f', 1);     // agility buff

    printf("HP: %d\n", hp);
    printf("Attack: %d\n", attack);
    printf("Speed: %f\n", speed);

    return 0;
}