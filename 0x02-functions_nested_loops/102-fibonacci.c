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
	unsigned long int nxtnum = n1 + n2;

	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		printf("%lu", nxtnum);
		n1 = n2;
		n2 = nxtnum;
		nxtnum = n1 + n2;
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
