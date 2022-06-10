#include<stdio.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int n, x, k;
          scanf("%d %d %d", &n, &x, &k);
          int a=k/x;
          if(n<a)
               printf("%d\n", n);
          else printf("%d\n", a);

     }
     return 0;
}
