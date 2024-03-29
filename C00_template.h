// =======================================================================
// Description     : Code that will impress u ;)
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// rules			:
//		use snake case
//		all user defined typedefs should be all caps
// =======================================================================

#include <stdio.h>
#include <string.h>

typedef enum{FALSE, TRUE}BOOLEAN;

// =======================================================================
// MISC FUNCTIONS
// =======================================================================

void separator(char* message){
	int count = 55; 				//additional 5 for the (\n)s and the \0
	char new_string[count];

	memset(new_string, '-', count);

	new_string[0] = '\n';
	new_string[1] = '\n';
	new_string[count-2] = '\n';
	new_string[count-3] = '\n';
	new_string[count-1] = '\0';

	memcpy(new_string + 2, message, strlen(message));
	new_string[strlen(message) + 2] = ' ';

	printf("%s", new_string);
}

// =======================================================================
// CORE FUNCTIONS 1
// =======================================================================
