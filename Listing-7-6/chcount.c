//chcount.c -- use the logical AND operator

#include <stdio.h>

#define PERIOD '.'

int main() {

	int ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD) {
		
		if (ch != '"' && ch != '\n')
			charcount++;
	}
	printf("There are %d non-quote characters.\n", charcount);

	return 0;
}
