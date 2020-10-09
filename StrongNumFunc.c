#include<stdio.h>
int n,limit,sum,rem,r1,a,temp;
int factNum(int n1);
int main()
{
	printf("enter the limit:");
	scanf("%d",&limit);
	for(n=1;n<=limit;n++)
	{
		sum = 0;
		temp = n;
		while(temp!=0)
		{
			rem = temp%10;
			r1 = factNum(rem);
			sum+=r1;
			temp/=10;	
		}
		if(sum==n)
		{
			printf("%d\n",n);
		}
	}
	return 0;
}
int factNum(int n1)
{
	int i,fact=1;
	for(i=1;i<=n1;i++)
	{
		fact = fact * i;
	}
	return fact;
}
