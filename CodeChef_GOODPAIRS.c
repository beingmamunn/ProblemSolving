#include<stdio.h>
int main()
{
     int t, n, i, j;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d", &n);
          int a[n+5], b[n+5], count=0;
          for(i=0; i<n; i++)
          {
               scanf("%d", &a[i]);
               scanf("%d", &b[i]);
          }
          for(i=0; i<n; i++)
          {
               for(j=0; j<n; j++)
               {
                    if(a[i]<b[j] && a[i]==b[j] && a[j]==b[i])
                         count++;
               }
          }
          printf("%d\n", count);
     }
}
