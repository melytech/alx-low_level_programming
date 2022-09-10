#include <stdio.h>
/**
* main - This prints lowercase alphabets in reverse
* Return: Return always true
*/
int main(void)
{
	char alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha--);
	}

	putchar('\n');

	return (0);
}


