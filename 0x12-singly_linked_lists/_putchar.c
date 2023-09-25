include <unistd.h>

/**
 * _putchar - prints the character to output
 * @c: The char to print
 * Return: success = 1.
 * On error, -1 is returned, and error number is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
