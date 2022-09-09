#include <stdio.h>
/**
* main - Write a program that prints all single digit numbers 
* Return: Returns always true
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%i", n);

	putchar('\n');

	return (0);
}
