#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ITEMS 10
#define MAX_BOSSES 3

// --- Item structure ---
typedef struct {
    char name[30];
    int attack;
} Item;

// --- Boss structure ---
typedef struct {
    char name[30];
    int respawn_timer; // in seconds
} Boss;

// Comparison for sorting items by attack
int item_cmp(const void *a, const void *b) {
    return ((Item *)b)->attack - ((Item *)a)->attack; // descending
}

// Comparison for searching item by name
int item_name_cmp(const void *a, const void *b) {
    return strcmp((char *)a, ((Item *)b)->name);
}

int main() {
    Item inventory[MAX_ITEMS] = {
        {"Sword", 50},
        {"Axe", 70},
        {"Dagger", 30},
        {"Bow", 40},
        {"Hammer", 80},
        {"Staff", 25},
        {"Mace", 60},
        {"Spear", 45},
        {"Crossbow", 55},
        {"Katana", 90}
    };

    Boss bosses[MAX_BOSSES] = {
        {"Dragon", 10},
        {"Lich", 5},
        {"Goblin King", 3}
    };

    char search_name[30];
    Item *found_item;

    // --- Sort items by attack ---
    qsort(inventory, MAX_ITEMS, sizeof(Item), item_cmp);

    printf("Inventory sorted by attack power:\n");
    for(int i = 0; i < MAX_ITEMS; i++)
        printf("%d. %s (Attack: %d)\n", i+1, inventory[i].name, inventory[i].attack);

    // --- Search for an item ---
    printf("\nEnter item name to search: ");
    scanf("%s", search_name);

    found_item = (Item *)bsearch(search_name, inventory, MAX_ITEMS, sizeof(Item), item_name_cmp);

    if(found_item)
        printf("Found %s with Attack %d!\n", found_item->name, found_item->attack);
    else
        printf("Item %s not found.\n", search_name);

    // --- Boss timers simulation ---
    printf("\nBoss spawn timers:\n");
    time_t start_time = time(NULL);
    int seconds_passed;
    for(int t = 0; t < 12; t++) { // simulate 12 seconds
        seconds_passed = (int)(time(NULL) - start_time);
        for(int i = 0; i < MAX_BOSSES; i++) {
            int remaining = bosses[i].respawn_timer - seconds_passed;
            if(remaining <= 0)
                printf("%s has spawned!\n", bosses[i].name);
            else
                printf("%s respawns in %d sec\n", bosses[i].name, remaining);
        }
        printf("----\n");
        sleep(1); // wait 1 second
    }

    // --- Day/Night cycle simulation ---
    printf("\nDay/Night cycle:\n");
    for(int hour = 0; hour < 24; hour++) {
        if(hour >= 6 && hour < 18)
            printf("%02d:00 - Daytime\n", hour);
        else
            printf("%02d:00 - Nighttime\n", hour);
    }

    return 0;
}