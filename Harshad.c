#include<stdio.h>
int main()
{
     //To initialize of variable
     int number,temp,sum = 0, digit, res;

    //To take user input
    printf("enter any number : "); 
    scanf("%d",&number);

    //store in temporary variable
    temp = number;
   //use while loop with this condition
   while(temp!=0)
   {
       //to find last digit
        digit=temp % 10;
      //sum+=digit
        sum = sum + digit;
     //temp/=10
        temp = temp / 10;
   }
   res = number % sum;
   //check result is equal is to 0
   if(res == 0)
      //display
       printf("%d is Harshad Number",number);
   else
      //display
      printf("%d is not Harshad Number",number);
  return 0;
} 
