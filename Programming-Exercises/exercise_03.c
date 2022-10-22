// Exercise 3, Chapter 7, C Primer Plus
//
// Write a program that reads integers
// until 0 is entered. After input
// terminates, the program should report
// the total number of even integers 
// (excluding the 0) entered, the average
// value of the even integers, the total
// number of odd integers entered, and the
// average value of the odd integers.

#include <stdio.h>

int main(void) {
	
	int num;
	int even_count = 0, odd_count = 0;
	int even_total = 0, odd_total = 0;
	double even_avg = 0, odd_avg = 0;

	printf("Enter an integer (q to quit): ");
	while ((scanf("%d", &num) == 1) && num != 0) {
		if (num % 2 == 0) {
			even_total += num;
			even_count++;
			even_avg = (double) even_total / even_count;
		} else {
			odd_total += num;
			odd_count++;
			odd_avg = (double) odd_total / odd_count;
		}
		printf("Enter next integer (q to quit): \n");
	}
	printf("\nNumber of even numbers: %d\n", even_count);
	printf("Number of odd numbers: %d\n", odd_count);
	
	// code added by Matt Johnson
	printf("\nSum of even numbers: %d\n", even_total);
	printf("Sum of odd numbers: %d\n", odd_total);

	printf("\nAverage of even numbers: %.2lf\n", even_avg);
	printf("Average of odd numbers:	%.2lf\n", odd_avg);

	return 0;
}
