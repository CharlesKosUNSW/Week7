// Charles Kos
// 13.07.2022
// z5160675@unsw.edu.au

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define MAX_LINE 4096

void q9(void) {

    char line[MAX_LINE];
    int  i;

    while (fgets(line, MAX_LINE, stdin) != NULL) {      //Why not make this an if() statement?
        i = 0;                                          //Reset counter each time
        while (line[i] != '\n' && line[i] != '\0') {    //Only want to read a line so hence '\n', but what is \0 (put there by fgets)?
            i = i + 1;
        }
        printf("line %d characters long\n", i);
    }

}