#include <stdio.h>

void main()
{
	int a, b;

	printf("Enter a value for a \n\r");
	a = (int)getchar();
	printf("Enter a value for b \n\r");
	flushall();
	b = (int)getchar();

	if(a > b)
		printf ("a is bigger then b");
	else
		printf ("b is bigger or equal to a");
}

