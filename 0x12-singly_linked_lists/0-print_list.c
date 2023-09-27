#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("%s\n", h->str);
		else
		printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
