#include<stdio.h>
int i,j;
int main()
{
		for(i=1;i<=5;i++)                     //increment in outer loop
	{
		for(j=5;i<=j;j--)                     //decrement in inner loop
		{
			printf("*");                    
		}                                   
		printf("\n");
	}
	return 0;
}
