#include <stdio.h>


int main()
{

	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
		}
		else
			putchar(c);
			c++;
	}
	putchar('\n');
	return 0;
}
