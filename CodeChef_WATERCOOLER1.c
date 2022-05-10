#include<stdio.h>
int main()
{
     int t, x, y, m;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d %d", &x, &y, &m);
          if((x*m)<y)
               printf("YES\n");
          else printf("NO\n");
     }
}
