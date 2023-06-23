#include "main.h"

/**
 * print_line - Prints a straight line of '_' characters.
 * @n: Number of times the character '_' should be printed.
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }

    _putchar('\n');
}

