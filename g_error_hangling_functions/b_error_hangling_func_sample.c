#include <stdio.h>
#include <assert.h>

int main()
{
    int hp = 100;
    int damage;

    printf("Enter damage: ");
    scanf("%d", &damage);

    assert(damage >= 0); // assert pag mali may bug error na sample -1 negative mo error na 

    hp -= damage;

    printf("Player HP: %d\n", hp);

    return 0;
}