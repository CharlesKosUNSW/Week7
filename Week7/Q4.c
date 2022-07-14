// Charles Kos
// 13.07.2022
// z5160675@unsw.edu.au

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void q4(void) {

	//This program should read in lower case letters and convert them to uppercase
	//Each letter is a number itself, should we store them in an array? Or can we avoid such limitations

	int c = 0;		//Why is this an int?

	//The command line is kind of like a file, a text file if you will
	//getchar() will read each character in that file one by one
	//we want it to read until it gets to the end of the file

	c = getchar();	//Why not put this in the loop condition?

	while (c != EOF) {

		//Established that c is valid input, only change it if it's a letter

		if (c > 'A' && c <= 'Z') {			//What are these ''?
			c = c - 1;						//Que? A letter minus a number?
		} else if (c == 'A') {				//Why this exception?
			c = 'Z';
		} else if (c > 'a' && c <= 'z') {	//Wait capital letters are different?
			c = c - 1;
		}
		else if (c == 'a') {
			c = 'z';
		}

		//printf, kinda
		putchar(c);

		// Get next letter
		c = getchar();
	}


}