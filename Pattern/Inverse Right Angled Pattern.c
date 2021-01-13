#include<stdio.h>
#include<conio.h>
int main()
{
	int row;
	int i,j;
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
