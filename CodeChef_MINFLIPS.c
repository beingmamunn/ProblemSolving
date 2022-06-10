#include<stdio.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int n, count=0, i;
          scanf("%d", &n);
          int arr[n+5];
          for(i=0; i<n; i++)
          {
               scanf("%d", &arr[i]);

          }
          while(arr[n]!=  0)
          {
               for(i=0; i<n; i++)
               {
                    arr[i]*(-1);
               }
               count++;
          }
          if(arr[n]==0)
               printf("%d\n", count);
          else printf("-1\n");
     }
}
