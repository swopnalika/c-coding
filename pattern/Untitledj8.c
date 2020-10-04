#include<stdio.h>
int i,j;
int main()
{
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)           //both decrement is use in for loop
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
