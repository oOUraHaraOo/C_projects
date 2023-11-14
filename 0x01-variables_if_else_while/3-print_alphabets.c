#include <stdio.h>


int main()
{
	char c;
	char x;

	c = 'a';
	x = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return 0;
}
