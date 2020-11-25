#include <stdio.h>

int Main()
{
int a[100];
int n, i, j, temp;

printf("Enter the size of list : ");
scanf("%d",&n);

for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}

for(i=0; i<n/2; i++)
{
for(j=0; j<n/2; j++)
{
if(a[i]<a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}

for(i=n/2; i<n; i++)
{
for(j=n/2; j<n; j++)
{
if(a[i]>a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}


printf("First Half in Ascending order : ");
for(i=0; i<n/2; i++)
{
printf("%d ",a[i]);
}
printf("\nSecond Half in Descending order : ");
for(i=n/2; i<n; i++)
{
printf("%d ",a[i]);
}

return 0;
}
