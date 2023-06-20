#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib1 = 1; /* First Fibonacci number */
	long int fib2 = 2; /* Second Fibonacci number */
	long int sum = 0; /* Sum of even-valued terms */
	long int temp;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
			sum += fib2;

		temp = fib2;
		fib2 += fib1;
		fib1 = temp;
	}

	printf("%ld\n", sum);

	return 0;
}

