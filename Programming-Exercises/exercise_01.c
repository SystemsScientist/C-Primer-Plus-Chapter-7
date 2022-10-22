// Exercise 1, Chapter 7, C Primer Plus
//
// Write a program that reads input until
// encountering the # character and then
// reports the number of spaces read, the
// number of newline characters read, and 
// the number of all other characters read.

#include <stdio.h>
#include <ctype.h>

int main(void) {

	int ch;
	int num_spaces = 0;
	int num_newlines = 0;
	int num_chars = 0;

	while ((ch = getchar()) != '#') {
		if (ch == '\n')
			num_newlines++;
		else if (isspace(ch))
			num_spaces++;
		else
			num_chars++;
	}
	printf("Number of spaces: %d\n", num_spaces);
	printf("Number of newlines: %d\n", num_newlines);
	printf("Number of characters: %d\n", num_chars);	

	return 0;
}
