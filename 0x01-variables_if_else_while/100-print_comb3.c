#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j =0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (j == 9 && i == 8)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
