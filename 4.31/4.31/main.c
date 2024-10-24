#include<stdio.h>
main()
{
	int j;
	int i = 5;
	for (int k = 1;k <= i;k++)
	{
		for (j = 1;j <= i - k;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= 2 * k - 1;j++)
		{
			printf("*");
		}

		printf("\n");
	}
	i = 4;
	for (int k = 1;k <= i;k++)
	{
		for (j = 1;j <= k;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= 2 * (5 - k) - 1;j++)
		{
			printf("*");
		}

		printf("\n");
	}

}