#include<stdio.h>
int main()
{
     int t, a, b, c, d;
     scanf("%d", &t);
     while (t--)
     {
          scanf("%d %d", &a, &b);
          scanf("%d %d", &c, &d);
          if(c>=a && d>=b)
               printf("POSSIBLE\n");
          else printf("IMPOSSIBLE\n");
     }

}
