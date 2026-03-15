#include <stdio.h>
#include <string.h>

struct Warrior
{
    char name[30];
    int attack;
    int hp;
};

/* Function that returns a pointer to Warrior */
struct Warrior *stronger(struct Warrior *a, struct Warrior *b);

int main()
{
    struct Warrior jamber;
    struct Warrior kane;
    struct Warrior *champ;

    /* Setup warriors */
    strcpy(jamber.name, "Jamber");
    jamber.attack = 40;
    jamber.hp = 120;

    strcpy(kane.name, "Kane");
    kane.attack = 60;
    kane.hp = 150;

    printf("=== WAR DOGZ ARENA ===\n\n");

    printf("%s  ATK:%d  HP:%d\n", jamber.name, jamber.attack, jamber.hp);
    printf("%s  ATK:%d  HP:%d\n\n", kane.name, kane.attack, kane.hp);

    /* Call function returning pointer */
    champ = stronger(&jamber, &kane);

    printf("The strongest warrior is: %s\n", champ->name);
    printf("Attack Power: %d\n", champ->attack);
    printf("HP: %d\n", champ->hp);

    return 0;
}

/* Function returning pointer */
struct Warrior *stronger(struct Warrior *a, struct Warrior *b)
{
    if(a->attack > b->attack)
        return a;

    return b;
}