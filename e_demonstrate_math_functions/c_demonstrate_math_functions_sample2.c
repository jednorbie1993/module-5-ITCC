/* Wardogz Combat & Distance Calculator
   Demonstrates math.h functions */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double attack, defense;
    double x1, y1, x2, y2;
    double damage, crit_damage;
    double distance;

    printf("=== WARDOGZ COMBAT SYSTEM ===\n");

    /* Player stats */
    printf("\nEnter player attack: ");
    scanf("%lf", &attack);

    printf("Enter enemy defense: ");
    scanf("%lf", &defense);

    /* Damage formula */
    damage = attack - defense;
    damage = abs(damage);

    printf("\nBase Damage: %lf\n", damage);

    /* Critical hit using ceil */
    crit_damage = ceil(damage * 1.25);
    printf("Critical Damage: %lf\n", crit_damage);

    /* Armor reduction using floor */
    printf("Armor Value (rounded): %lf\n", floor(defense));

    /* Level scaling example using pow */
    printf("Level Power Example (level^2): %lf\n", pow(attack, 2));

    /* Distance system */
    printf("\n=== DISTANCE CHECK ===\n");

    printf("Enter player position (x y): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter enemy position (x y): ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between player and enemy: %lf\n", distance);

    if(distance <= 5)
        printf("Enemy is in attack range!\n");
    else
        printf("Enemy is too far.\n");

    return 0;
}