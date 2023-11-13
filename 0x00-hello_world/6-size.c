#include <stdio.h>


int main()
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return 0;
}

