#include <stdio.h>
#include <assert.h>

int main()
{
    int player_hp = 100;
    int damage;

    printf("Enter damage: ");
    scanf("%d", &damage);

    assert(damage >= 0);  // damage cannot be negative

    player_hp -= damage;

    printf("Player HP: %d\n", player_hp);

    return 0;
}