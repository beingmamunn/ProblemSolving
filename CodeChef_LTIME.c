#include<stdio.h>
int main()
{
     int t, x;
     scanf("%d", &t);
     while (t--)
     {
          scanf("%d", &x);
          if(x<=4 && x>=1)
               printf("YES\n");
          else printf("NO\n");
     }
}
