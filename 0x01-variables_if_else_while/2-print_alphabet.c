#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0, if successful
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
