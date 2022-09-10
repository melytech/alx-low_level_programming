#include <stdio.h>
/**
 * main - Prints single digit numbers
 * Return: Returns always true
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++) 
	{
		putchar((i % 10) + '0');

		if (i == 9)
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
