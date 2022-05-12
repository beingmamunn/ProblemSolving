#include<stdio.h>
int main()
{
     int t, x, y;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &x, &y);
          if((x*1.07)>=y)
               printf("YES\n");
          else printf("NO\n");
     }
}
