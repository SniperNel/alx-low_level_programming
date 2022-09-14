#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char i = 'a';

	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
