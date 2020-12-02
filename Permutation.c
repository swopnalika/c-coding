#include<stdio.h>

// Program to find the factorial of the number
int factorial (long int x)
{
  long int fact=1,i;
  for(i=1;i<=x;i++)
  {
     fact=fact*i;
  }
  return fact;
}
int main()
{
    long int n,r,permutation,temp;
     long int numerator, denominator;

// Insert the num of people

    printf("\nEnter the number of persons : ");

    scanf("%ld",&n);

// Insert the num of seats
             
    printf("\nEnter the number of seats available : ");
             
    scanf("%ld",&r);
// Base condition
// Swap n and r when n is less than r
 
   if(n < r)
   {
     temp=n;
     n=r;
     r=temp;
   }
  numerator=fact(n);
  denominator=fact(n-r);
  permutation=numerator/denominator;
 printf("\nNum of ways people can be seated : ");
 printf("%ld\n",permutation);
}
