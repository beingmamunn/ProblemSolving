#include<stdio.h>
int main()
{
     int t, x, y, z;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d %d", &x, &y, &z);
          if(x<z && (x+y)>z)
               printf("1\n");
          else if(x<=z && (x+y)<=z)
               printf("2\n");
          else if(x>z)
               printf("0\n");
     }
}
