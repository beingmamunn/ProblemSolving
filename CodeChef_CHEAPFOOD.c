#include<stdio.h>
int main()
{
     int t, x;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d", &x);
          if(((10*x)/100)>=100)
               printf("%d\n", ((10*x)/100));
          else printf("%d\n", 100);
     }
}
