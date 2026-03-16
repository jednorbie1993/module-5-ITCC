#include <stdio.h>
#include "calc.h"

int main()
{
    int x;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    printf("The square of %d is %ld\n", x, sqr(x));

    return 0;
}
//Ito yung main program.

//gcc main.c calc.c -o program - yan ang kelan para mag run
//.\program - yan sunod

/*
File	Purpose
main.c	main program
calc.c	functions (logic)
calc.h	declarations

*/