#include<stdio.h>
int i,j;
int main()
{
	for(i = 5;i >= 1;i--)                      //decrement is used in outer loop
	{
		for(j = i;j <= 5;j++)                  //increment is used in inner loop
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
