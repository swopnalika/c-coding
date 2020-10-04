#include<stdio.h>
int i,j,k;
int main()
{
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
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
