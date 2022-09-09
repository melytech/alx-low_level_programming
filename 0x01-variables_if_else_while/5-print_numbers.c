#include <stdio.h>
/**
* main - Write a program that prints all single digit numbers of base 10 starting from 0
* Return: Always true
*/
int main(void)
{
int n;

	for (n = 0; n <= 9; n++)
		printf("%i", n);

	putchar('\n');

	return (0);
}
