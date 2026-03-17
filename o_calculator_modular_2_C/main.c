#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    int a, b;

    do {
        printf("\n==== CALCULATOR MENU ====\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%d", &a);

            printf("Enter second number: ");
            scanf("%d", &b);
        }

        switch (choice) {
            case 1:
                printf("Result: %d\n", add(a, b));
                break;

            case 2:
                printf("Result: %d\n", subtract(a, b));
                break;

            case 3:
                printf("Result: %d\n", multiply(a, b));
                break;

            case 4:
                if (b == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    printf("Result: %.2f\n", divide(a, b));
                }
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}