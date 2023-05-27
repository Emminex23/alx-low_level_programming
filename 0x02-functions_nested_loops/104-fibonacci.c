#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 at success
 */
int main(void)
{
	int i;
	double n1 = 1;
	double n2 = 2;
	double nxt_num = n1 + n2;

	printf("%.0f, %.0f, ", n1, n2);
	for (i = 3; i <= 98; i++)
	{
		printf("%.0f", nxt_num);
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
