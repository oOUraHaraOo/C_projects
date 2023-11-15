#include <stdio.h>


int main()
{

	char n;
	
	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return 0;
}
