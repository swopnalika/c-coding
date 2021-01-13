#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,row,s;
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(s=i;s<row;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
