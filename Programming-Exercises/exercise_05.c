// Exercise 5, Chapter 7, C Primer Plus
//
// Redo exercise 3 using a switch. 

#include <stdio.h>

int main(void) {

	int num;
	int even_count = 0, odd_count = 0;
	int even_total = 0, odd_total = 0;
	double even_avg = 0, odd_avg = 0;

	printf("Enter an integer (q to quit): ");
	while ((scanf("%d", &num) == 1) && num != 0) {
		switch (num % 2) {
			case 0:
				even_total += num;
				even_count++;
				even_avg = (double) even_total / even_count;
				break;
			case 1:
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
	printf("Average of odd numbers: %.2lf\n", odd_avg);

	return 0;
}
