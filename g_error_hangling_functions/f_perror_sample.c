#include <stdio.h>
#include <errno.h>

int main()
{
    FILE *save;

    save = fopen("save.dat", "r");

    if(save == NULL)
    {
        perror("Save file error");  // print error message
        printf("errno = %d\n", errno);
    }
    else
    {
        printf("Save file opened successfully\n");
        fclose(save);
    }

    return 0;
}