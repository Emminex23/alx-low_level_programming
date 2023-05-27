#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 at success
 */
int main(void)
{
	int i;
	unsigned long n1 = 1;
	unsigned long n2 = 2; 
	unsigned long nxt_num = n1 + n2;

	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 98; i++)
	{
		printf("%lu", nxt_num);
		n1 = n2;
		n2 = nxt_num;
		nxt_num = n1 + n2;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
