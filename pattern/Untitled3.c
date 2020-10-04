#include<stdio.h>
int checkPrimeBetween(int n);
int main()
{
	int l,u,flag,i;
	printf("enter l and u nos:");
	scanf("%d%d",&l,&u);
	for(i=l;i<=u;i++)
	{
		if(i==0||i==1)
		continue;
		flag = 0;
		flag = checkPrimeBetween(i);
		if(flag == 0)
		{
			printf("%d",i);
		}	
	}
	return 0;
}
int checkPrimeBetween(int n)
{
	int j,flag = 0;
	for(j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			flag = 1;
			break;
		}	
	}
	return flag;
}
