// Charles Kos
// 13.07.2022
// z5160675@unsw.edu.au

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define MAX_LINE 4096

void q10(void) {

    //Variables
    char line[MAX_LINE];
    int  i;

    //Allow for the program to run for a while
    while (fgets(line, MAX_LINE, stdin) != NULL) {

        i = 0;
        while (line[i] != '\n' && line[i] != '\0') {
            i = i + 1;
        }

        i = i - 1;

        while (i >= 0) {
            printf("%c", line[i]);
            i = i - 1;
        }
        printf("\n");

    }
}