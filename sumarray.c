#include<stdio.h>
int main()
{
	float arr[10];
	int i;
	float sum=0;
	printf("enter the array.\n");
	for(i=0;i<10;i++)
	{
		printf("arr[%d] :", i);
		scanf("%lf",&arr[i]);
		sum = sum + (arr[i]*arr[i]);
	}
	printf("The sum of the squares of each element is:%lf",sum);
}
