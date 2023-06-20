#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int fib1 = 1; /* First Fibonacci number */
	unsigned long int fib2 = 2; /* Second Fibonacci number */
	unsigned long int fib_next;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib_next = fib1 + fib2;
		printf(", %lu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return 0;
}

