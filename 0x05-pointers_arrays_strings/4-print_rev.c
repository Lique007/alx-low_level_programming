#include "main.h"

/**
 * print_rev - function protoype
 * Description: Prints a string in reverse
 * @s: print the string 
 * Return: void
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
