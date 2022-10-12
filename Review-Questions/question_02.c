// Question 4, Chapter 7, C Primer Plus
//
// What is the numerical value of each of 
// the following expressions?
//
// 	a. 5 > 2
//
// 	b. 3 + 4 > 2 && 3 < 2
//
// 	c. x >= y || y > x
//
// 	d. d = 5 + (6 > 2)
//
// 	e. 'X' > 'T' ? 10 : 5
//
// 	f. x > y ? y > x : x > y

#include <stdio.h>

int main() {

	printf("5 > 2 is %d\n", 5 > 2); // is 1 or true
	printf("3 + 4 > 2 && 3 < 2 is %d\n", 3 + 4 > 2 && 3 < 2); // is 0 or false
	printf("'X' > 'T' ? 10 : 5 is %d\n", 'X' > 'T' ? 10 : 5); // is 10

	return 0;
}
