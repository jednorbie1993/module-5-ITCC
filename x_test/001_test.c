#include <stdio.h>

// function prototypes
void section1();
void section2();

int main() {
    printf("=== MODULE 5 LESSON 16 ===\n\n");

    section1();
    section2();

    return 0;
}

// ================= SECTION 1 =================
void section1() {
    printf("=== SECTION 1 ===\n\n");

    printf("Q1: Difference between pass by value and reference?\n");
    printf("A: Value = copy only, Reference = address, can modify original\n\n");

    printf("Q2: What is a void pointer?\n");
    printf("A: A generic pointer that can point to any data type\n\n");

    printf("Q3: Why use void pointer?\n");
    printf("A: To handle different data types in one function\n\n");

    printf("Q4: What is type casting?\n");
    printf("A: Converting void pointer to specific type before use\n\n");

    printf("Q5: Can function have only variable arguments?\n");
    printf("A: No, need at least one fixed argument\n\n");

    printf("Q6: Macros for variable arguments?\n");
    printf("A: va_start, va_arg, va_end\n\n");

    printf("Q7: Increment value of void pointer?\n");
    printf("A: Not allowed\n\n");

    printf("Q8: Can function return pointer?\n");
    printf("A: Yes\n\n");

    printf("Q9: Prototype (int return, char array pointer)\n");
    printf("A: int function(char array[]);\n\n");

    printf("Q10: Prototype (3 int passed by reference)\n");
    printf("A: int numbers(int *a, int *b, int *c);\n\n");

    printf("Q11: Function call\n");
    printf("A: numbers(&int1, &int2, &int3);\n\n");
}

// ================= SECTION 2 =================
void section2() {
    printf("=== SECTION 2 ===\n\n");

    printf("Q1: Return type of math functions?\n");
    printf("A: double\n\n");

    printf("Q2: time_t equivalent?\n");
    printf("A: Usually long\n\n");

    printf("Q3: time() vs clock()?\n");
    printf("A: time = real time, clock = program execution time\n\n");

    printf("Q4: perror() does what?\n");
    printf("A: Displays error message only\n\n");

    printf("Q5: Before bsearch()?\n");
    printf("A: Sort the array\n\n");

    printf("Q6: 16,000 items comparisons?\n");
    printf("A: 14\n\n");

    printf("Q7: 10 items comparisons?\n");
    printf("A: 4\n\n");

    printf("Q8: 2,000,000 items comparisons?\n");
    printf("A: 21\n\n");

    printf("Q9: If not found?\n");
    printf("A: NULL\n\n");

    printf("Q10: Problem in program?\n");
    printf("A: Missing size, wrong function call, no compare function\n\n");

    printf("Q11: Compare function issue?\n");
    printf("A: Wrong return values\n\n");

    printf("Q12: Sort 30 names?\n");
    printf("A: Use qsort() with compare function\n\n");
}

//reviewed march 18, 2026