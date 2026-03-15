#include <stdio.h>

#define MAX_STUDENTS 5

void inputGrades(int grades[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter grade for student %d: ", i+1);
        scanf("%d", &grades[i]);
    }
}

void displayGrades(int grades[], int n) {
    printf("\nGrades of students:\n");
    for(int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i+1, grades[i]);
    }
}

float averageGrade(int grades[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += grades[i];
    return (float)sum / n;
}

int main() {
    int grades[MAX_STUDENTS];
    
    printf("Student Grade Management System\n");
    inputGrades(grades, MAX_STUDENTS);
    displayGrades(grades, MAX_STUDENTS);
    
    printf("\nAverage grade: %.2f\n", averageGrade(grades, MAX_STUDENTS));
    
    return 0;
}

/*
Concepts Covered:

Array → grades[MAX_STUDENTS]

Loops → for loops sa input at display

Functions → inputGrades(), displayGrades(), averageGrade()

Basic I/O → printf & scanf

Type casting → (float)sum / n

Step 2: Quick Fundamentals Cheatsheet

Data types: int, float, char, char[]

Operators: + - * / % ++ --

Conditionals: if, else if, else, switch

Loops: for, while, do while

Functions: return type, parameters

Arrays: int arr[5]

Basic I/O: printf / scanf

*/