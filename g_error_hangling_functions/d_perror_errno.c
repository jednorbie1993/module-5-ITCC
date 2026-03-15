#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    FILE *fp;
    char filename[80];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        perror("Error opening file");  // print error message
        printf("errno = %d\n", errno); // show error code
        exit(1);
    }

    printf("File opened successfully\n");

    fclose(fp);

    return 0;
}