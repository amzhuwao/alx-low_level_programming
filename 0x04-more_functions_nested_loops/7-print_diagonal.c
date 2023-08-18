#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: variable for length
 * Return: 0
 */

void print_diagonal(int n)
{
	int spaces, slashes;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (slashes = 0; slashes < n; slashes++)
	{
		for (spaces = 0; spaces < slashes; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
