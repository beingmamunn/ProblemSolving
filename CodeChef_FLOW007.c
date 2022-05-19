#include<stdio.h>
#include<math.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int n, r, sum=0;
          scanf("%d", &n);
          while(n>0)
          {
               r=n%10;
               sum=(sum*10)+r;
               n=n/10;
          }
          printf("%d\n", sum);
     }
}
