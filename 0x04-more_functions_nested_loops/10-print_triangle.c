#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size - row; col++)
		{
			_putchar(' ');
		}

		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
