#include "main.h"

/**
 * print_most_numbers - prints the numbers
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '1' && i != '3')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
