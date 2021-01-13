#include<stdio.h>
#include<conio.h>
int main()
{
	int row,i,j,s;
	scanf("%d",&row);
	s = row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			if(i==j || j==s)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("\n");
		s--;
	}
	getch();
}
