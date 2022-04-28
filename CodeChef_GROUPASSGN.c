#include<stdio.h>
int main()
{
     int t, n, x, i;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &n, &x);
          printf("%d\n", (2*n-(x-1)));
     }
}
