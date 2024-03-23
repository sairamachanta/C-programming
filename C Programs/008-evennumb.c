/*
	to format complete program
	select all	: CTRL + A
	to format	: CTRL + K, CTRL + F
*/

#include <stdio.h>
int main()
{
	// variable declaration
	int i, n;

	// take input from user
	printf("enter the range:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}