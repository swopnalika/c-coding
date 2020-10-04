#include<stdio.h>
int i,j;
int main()
{
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");              //both decrement in for loop
		}
		printf("\n");
	}
	return 0;
}
	

