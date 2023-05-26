#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: first number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d", i);
		printf(", ");
	}
	for (i = n; i > 98; i--)
	{
		printf("%d", i);
		printf(", ");
	}
	printf("98");
	printf("\n");
}
