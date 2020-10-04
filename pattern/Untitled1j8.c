#include<stdio.h>
int i,j,k;
int main()
{
	for(i=1;i<=5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
