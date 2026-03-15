/* Wardogz Math Function Demonstration
   Calculates attack, defense, and movement stats */

#include <stdio.h>
#include <math.h>

int main()
{
    double attack;

    printf("Enter base attack power: ");
    scanf("%lf", &attack);

    printf("\nOriginal Attack: %lf\n", attack);

    /* round attack upward (critical bonus) */
    printf("Ceil Attack (Critical Hit): %lf\n", ceil(attack));

    /* enemy armor reduces attack */
    printf("Floor Attack (After Armor): %lf\n", floor(attack));

    /* agility formula example */
    if(attack >= 0)
        printf("Speed Stat (sqrt formula): %lf\n", sqrt(attack));
    else
        printf("Invalid stat value\n");

    /* movement angle example */
    printf("Movement Cosine Value: %lf\n", cos(attack));

    return 0;
}

/*
ceil(attack)  -> critical damage
floor(attack) -> armor reduction
sqrt(attack)  -> speed stat
cos(angle)    -> projectile direction

attack = 100.95

ceil(attack)  -> critical damage
floor(attack) -> armor reduction
sqrt(attack)  -> speed stat
cos(angle)    -> projectile direction


*/