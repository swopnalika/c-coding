#include<stdio.h>
int i,j;
int main()
{
	for(i=1;i<=5;i++)                               //increment in outer loop 
	{
		for(j=1;j<=5;j++)                           //increment in inner loop 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
