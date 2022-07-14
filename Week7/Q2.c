// Charles Kos
// 13.07.2022
// z5160675@unsw.edu.au

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define LARGEST_NUMBER 99

void q2(void) {

	//Revise variable naming, should it be Integercounts, integer_counts?
	int integerCounts[LARGEST_NUMBER];
	int input = 0;

	//Initialise array
	int i = 0;
	while (i < LARGEST_NUMBER) {
		integerCounts[i] = 0;
		i++;
	}

	//Get user input for 1st time
	printf("Enter a number: ");

	while (scanf("%d", &input) == 1) {

		if (input > LARGEST_NUMBER || input < 0) {
			//If the user enters a number not between 0 and 99
			printf("Try again: number has to be between 0 and 99 inclusive\n");
		} else {
			//Add 1 to the counter for the integer in the array
			integerCounts[input]++;
			printf("You have entered %d %d times\n", input, integerCounts[input]);

		}

		//Prompt input again
		printf("Enter a number: ");

	}

}
