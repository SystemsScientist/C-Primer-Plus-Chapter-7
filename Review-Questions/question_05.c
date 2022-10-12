// Question 5, Chapter 7, C Primer Plus
//
// What will the following program print?

#include <stdio.h>

int main() {

	int num;

	for (num = 1; num <= 11; num++) {
		
		if (num % 3 == 0)
			putchar('$');
		else
			putchar('*');
			putchar('#');
		putchar('%');
	}
	putchar('\n');
	
	return 0;
}
