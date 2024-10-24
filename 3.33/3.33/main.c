#include<stdio.h>
int main() {
	for (int j = 0;j < 3;j++)
	{
		for (int i = 0;i < 12;i++)
		{
			if (j == 1 && (i == 0 || i == 11))
				printf("*");
			else if (j == 0 || j == 2)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}