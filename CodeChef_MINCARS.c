#include<stdio.h>
int main()
{
     int t, n;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d", &n);
          if (n%4==0) printf("%d\n", (n/4));
          else if (n%4!=0) printf("%d\n", (n/4)+1);
     }
}
