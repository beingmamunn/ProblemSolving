#include<stdio.h>
int main()
{
     int n, i, even=0, odd=0;
     scanf("%d", &n);
     int arr[n+5];
     for(i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
          if(arr[i]%2==0)
               even++;
          else if(arr[i]%2!=0)
               odd++;
     }
     if(even>odd)
          printf("READY FOR BATTLE\n");
     else printf("NOT READY\n");


}
