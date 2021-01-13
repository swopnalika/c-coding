#include<stdio.h>
#include<conio.h>
int main()
{
	int row,i,j;
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=row;j>=1;j--)
		{
			if(i==j)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
