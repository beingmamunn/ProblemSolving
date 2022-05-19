#include<stdio.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int x, y;
          scanf("%d %d", &x, &y);
          if(x==y)
               printf("0\n");
          else
          {
               int count=0;
               while(x<y)
               {
                    x=x+8;
                    count++;
               }
               printf("%d\n", count);
          }

     }
}
