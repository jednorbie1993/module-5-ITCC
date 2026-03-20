#include <stdio.h>

int main() {

    printf("=== MODULE 5 - LESSON 17 Q&A ===\n\n");

    // 1
    printf("Q1: Difference between malloc() and calloc()?\n");
    printf("A1: malloc() allocates memory without initialization (may garbage values).\n");
    printf("    calloc() allocates memory and initializes all bytes to 0.\n\n");

    // 2
    printf("Q2: Most common reason for typecasting?\n");
    printf("A2: To convert a variable from one data type to another, usually to avoid data loss or control the result.\n\n");

    // 3
    printf("Q3: Data types of expressions:\n");
    printf("a. (c + i + l) -> int\n");
    printf("b. (i + 32) -> int\n");
    printf("c. (c + 'A') -> int\n");
    printf("d. (i + 32.0) -> double\n");
    printf("e. (100 + 1.0) -> double\n\n");

    // 4
    printf("Q4: What is dynamically allocating memory?\n");
    printf("A4: It means allocating memory during runtime using functions like malloc() and calloc().\n");
    printf("    Memory is taken from heap instead of stack.\n\n");

    // 5
    printf("Q5: malloc for 1000 longs?\n");
    printf("A5: long *ptr = (long*) malloc(1000 * sizeof(long));\n\n");

    // 6
    printf("Q6: calloc for 1000 longs?\n");
    printf("A6: long *ptr = (long*) calloc(1000, sizeof(long));\n\n");

    return 0;
}