#include<stdio.h>
#include<conio.h>
int main()
{
	int row;
	int i,j;
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
