#include<stdio.h>
int main()
{
     int n, k, i, count=0;
     scanf("%d %d", &n, &k);
     int arr[n+5];
     for(i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
          if(arr[i]>=k)
               count++;
     }
     printf("%d\n", count);

}
