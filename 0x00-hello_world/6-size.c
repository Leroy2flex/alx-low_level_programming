#include <stdio.h>
/**
 * main - print out size of data types in C
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: 1 byte(s)", sizeof(a));
	printf("Size of an int: 4 byte(s)", sizeof(b));
	printf("Size of a long int: 8 byte(s)", sizeof(c));
	printf("Size of a long long init: 8 byte(s)", sizeof(d));
	printf("Size of a float: 4 byte(s)", sizeof(f));
	return (0);
}
