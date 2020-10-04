#include<stdio.h>
int arr[10],i,sum=0,avg=0,n;
int main()
{
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("number %d:",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg = sum/2;
	printf("average:%d",avg);
	return 0;
}
