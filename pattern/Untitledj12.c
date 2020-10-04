#include<stdio.h>
int i,j;
int main()
{
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
