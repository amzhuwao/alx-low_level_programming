#include "main.h"
/**
 * main - prints the string in variable and pointer
 *
 * Return: always 0
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] =  "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strcat(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);
	return (0);
}
