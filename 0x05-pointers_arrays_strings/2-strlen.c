#include "main.h"
/**
 * _strlen - function of prototype
 * Description - writ a function that returns the length of a string
 * @s: its to check the length
 * Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
