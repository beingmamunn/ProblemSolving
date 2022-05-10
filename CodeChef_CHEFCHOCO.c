#include<stdio.h>
int main()
{
     int t, c, x, y;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d %d", &c, &x, &y);
          printf("%d\n", (c-x)*y);
     }
}
