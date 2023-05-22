#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(i));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
