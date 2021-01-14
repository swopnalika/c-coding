#include<stdio.h>
#include<conio.h>
int main()
{
	int row,i,j,s;
	scanf("%d",&row);
	for(i=row;i>=1;i--)
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
