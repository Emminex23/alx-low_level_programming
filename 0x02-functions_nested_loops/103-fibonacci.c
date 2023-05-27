#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 at success
 */

int main(void)
{
	int i;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int nxt_num = n1 + n2;
	unsigned long int sum = 2;

	for (i = 1; i < 30; i++)
	{
		if (nxt_num != 4000000 && nxt_num % 2 == 0)
		{
			sum += nxt_num;
		}
		n1 = n2;
		n2 = nxt_num;
		nxt_num = n1 + n2;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
