#include<stdio.h>
int i,j;
int main()
{
	for(i = 5;i >= 1;i--)
	{
		for(j = i;j <= 5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}