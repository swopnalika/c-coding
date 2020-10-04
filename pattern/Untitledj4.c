#include<stdio.h>
int i,j;
int main()
{
	for(i=5;i>=1;i--)                                  //decrement in outer loop
	{
		for(j=1;j<=i;j++)                              //increment in inner loop
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
