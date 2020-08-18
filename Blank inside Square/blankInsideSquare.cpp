#include<stdio.h>
int main()
{
	int x,i,j;
	printf("Enter number :");
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			if (j>=2 && j<=x-1 && i>=2 && i<=x-1)
			{
			printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}