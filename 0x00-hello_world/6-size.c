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

	printf("Size of a char: %1u byte(s)\n", sizeof(a));
	printf("Size of an int: %1u byte(s)\n", sizeof(b));
	printf("Size of a long int:%1u8 byte(s)\n", sizeof(c));
	printf("Size of a long long init: %1u byte(s)\n", sizeof(d));
	printf("Size of a float: %1u byte(si)\n", sizeof(f));
	return (0);
}
