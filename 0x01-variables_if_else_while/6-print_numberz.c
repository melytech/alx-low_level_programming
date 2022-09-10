#include <stdio.h>
/**
* main - Write a program that prints all single digit numbers of base
* Return: Returns always true
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
