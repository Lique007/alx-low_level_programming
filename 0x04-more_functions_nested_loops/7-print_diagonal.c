#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times \ should be printed
*
* Return: no return
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
"7-print_diagonal.c" [New File]                                                                                      0,0-1         All

