#include<stdio.h>
int main()
{
     int t, x, y;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &x, &y);
          if (x<y)
               printf("BIKE\n");
          else if (y<x)
               printf("CAR\n");
          else
               printf("SAME\n");
     }
}
