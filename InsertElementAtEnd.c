#include<stdio.h>
int main()
{
	int n,i,key;
	int arr[40];
	printf("enter the no. of elements:");
	scanf("%d",&n);
	printf("the elements are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be inserted:");
	scanf("%d",&key);
	arr[n] = key;
	n++;
	printf("the final array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
