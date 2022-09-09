#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 * Return: Returns true always
 */
int main(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha++);
	}
	putchar('\n');

	return (0);
}
