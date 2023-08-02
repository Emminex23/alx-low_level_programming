#include <unistd.h>
#include <stdio.h>
/**
 * prtchar - prints a char
 * @c: char to print
 *
 * Return: Nothing
 */
void prtchar(char c)
{
	write(1, &c, 1);
}

/**
 * prt_alpha - prints the alpha starting from a char
 *
 * Return: Nothing
 */
void prt_alpha(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		prtchar(c);
		c++;
	}
}

/**
 * main - Entry point of the program
 *
 * Return: 0 at success
 */
int main(void)
{
	prt_alpha();
	prtchar('\n');
	return (0);
}
