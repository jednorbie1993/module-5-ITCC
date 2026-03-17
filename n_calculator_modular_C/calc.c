#include "calc.h"

// definition ng extern variable
int global_value = 10;

int add(int a, int b) {
    return a + b;
}

int square(int x) {
    return x * x;
}
//dito ka mag rurun
//gcc main.c calc.c -o program
//./program