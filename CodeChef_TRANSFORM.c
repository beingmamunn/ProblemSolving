#include<stdio.h>
int main()
{
     int t, x, i;
     scanf("%d", &t);
     while (t--)
     {
          scanf("%d", &x);
          if(x%3==0)
               printf("NORMAL\n");
          else if(x%3==1)
               printf("HUGE\n");
          else if(x%3==2)
               printf("SMALL\n");
     }
}
