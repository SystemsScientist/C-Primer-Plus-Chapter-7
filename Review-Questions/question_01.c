// Question 1, Chapter 7, C Primer Plus
//
// Determine which expressions are true
// and which are false
//
// 	a. 100 > 3 && 'a' > 'c'
//
// 	b. 100 > 3 || 'a' > 'c'
//
// 	c. !(100 > 3)

#include <stdio.h>

int main() {

	printf("100 > 3 && 'a' > 'c' is %d\n", 100 > 3 && 'a' > 'c'); // is 0 or false
	printf("100 > 3 || 'a' > 'c' is %d\n", 100 > 3 || 'a' > 'c'); // is 1 or true
	printf("!(100 > 3) is %d\n", !(100 > 3)); // is 0 or false

	return 0;
}
