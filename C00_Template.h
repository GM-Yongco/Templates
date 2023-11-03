// =======================================================================
// Description     : Code that will impress u ;)
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// =======================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// =======================================================================
// STRUCTS 1
// =======================================================================

typedef enum boolean{FALSE, TRUE}BOOLEAN;

// =======================================================================
// FUNCTIONS 1
// =======================================================================

void separator(char* message){
	// additonal 3 in the count for the two '\n's and the one '\0'
	int count = 43;
	char new_string[count];

	// setting everything to '-'
	int i;
	for(i = 0; i<count; i++){
		new_string[i] = '-';
	}

	// setting the end to be termination character
	// setting the ends to \n
	new_string[count-1] = '\0';
	new_string[count-2] = '\n';
	new_string[0] = '\n';

	// putting in the message
	int len = strlen(message);
	memcpy(new_string + 1, message, len);

	//puts a space between the message and the dashes
	new_string[len+1] = ' ';

	//printint the new message
	printf("%s", new_string);
}

void IntSwap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
