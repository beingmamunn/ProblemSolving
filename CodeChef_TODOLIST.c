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
               if(arr[i]>=1000)
                    count++;
          }
          printf("%d\n", count);
     }
}

