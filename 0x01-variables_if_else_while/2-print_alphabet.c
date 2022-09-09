#include <stdio.h>

/**
* main - Write a program that prints the alphabet in lowercase, followed by a new line
* Return: always successful
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

