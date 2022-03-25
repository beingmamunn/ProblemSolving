#include<stdio.h>
int main()
{
     int t, a, b, x, y;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d %d %d", &a, &b, &x, &y);
          if((a*b)<=(x*y))
               printf("Yes\n");
          else printf("No\n");
     }
}
