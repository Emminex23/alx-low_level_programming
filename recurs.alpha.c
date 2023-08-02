#include <unistd.h>
/**
 * prt_char - prints characters
 * @c: character to print
 *
 * Return: Nothing
 */
void prt_char(char c)
{
	write(1, &c, 1);
}

/**
 * prt_alpha_frm - prints alpha from a char
 * @c: The char to start printing from
 *
 * Return: Nothing
 */
void prt_alpha_frm(char c)
{
	if (c > 'z')
	{
		return;
	}
	prt_char(c);
	prt_alpha_frm(c + 1);
}

/**
 * prt_alpha - print the alphabets
 *
 * Return: Nothing
 */
void prt_alpha(void)
{
	prt_alpha_frm('a');
}

/**
 * main - Entry point of the program
 *
 * Return: 0 at success
 */
int main(void)
{
	prt_alpha();
	prt_char('\n');
	return (0);
}
