#include<stdio.h> 
int main()
{
 //for initialization of coordinates
      int x, y; //user input
      printf("Insert the value for variable X and Y\n");
      scanf("%d %d", &x, &y);
 //find true condition of first quadrant 
      if (x > 0 && y > 0)
      printf("point (%d, %d) lies in the First quadrant\n",x,y);
 //find second quadrant
      else if (x < 0 && y > 0)
      printf("point (%d, %d) lies in the Second quadrant\n",x,y);
//To find third quadrant
      else if (x < 0 && y < 0)
      printf("point (%d, %d) lies in the Third quadrant\n",x,y);
//To find Fourth quadrant
           else if (x > 0 && y < 0)
     printf("point (%d, %d) lies in the Fourth quandrant\n",x,y);
//To find dose not lie on origin
     else if (x == 0 && y == 0)
     printf("point (%d, %d) lies at the origin\n",x,y);
return 0;
}
