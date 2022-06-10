#include<stdio.h>
int main()
{
     int arr[5], count=0, n=4, i;
     while(n--)
     {
          scanf("%d", &arr[i]);
          if(arr[i]>=10)
               count++;
     }
     printf("%d\n", count);


}
