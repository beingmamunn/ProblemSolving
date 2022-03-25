#include<stdio.h>
int main()
{
     int t, x;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d", &x);
          if(x%5==0)
          {
               printf("%d\n", ((x/5)-(x/10)));
          }
          else
               printf("-1\n");
     }
}
