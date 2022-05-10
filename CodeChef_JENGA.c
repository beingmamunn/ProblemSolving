#include<stdio.h>
int main()
{
     int t, n, x;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &n, &x);
          if(n<=x && x%n==0)
               printf("YES\n");
          else printf("NO\n");
     }
}
