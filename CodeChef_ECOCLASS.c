#include<stdio.h>
int main()
{
     int t, n, i;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d", &n);
          int s[n+5], d[n+5], count=0;
          for(i=1; i<=n; i++)
          {
               scanf("%d", &s[i]);
          }
          for(i=1; i<=n; i++)
          {
               scanf("%d", &d[i]);
          }
          for(i=1; i<=n; i++)
          {
               if(s[i]==d[i])
                    count++;
          }
          printf("%d\n", count);
     }

}
