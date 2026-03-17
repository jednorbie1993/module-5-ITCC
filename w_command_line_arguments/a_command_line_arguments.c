#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    printf("Program name: %s\n", argv[0]);

    if (argc > 1) {
        for (i = 1; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    } else {
        printf("No arguments provided\n");
    }

    return 0;
}
//.\a_command_line_arguments.exe hello world "hi there"