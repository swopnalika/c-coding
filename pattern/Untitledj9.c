#include<stdio.h>
int i,j;
int main()
{
	for(i=1 ;i<=5 ;i++)                     //increment is used in outer loop
	{
		for(j=i ;j>=1 ;j--)                //decrement is used in inner loop
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
