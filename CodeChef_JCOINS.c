#include<stdio.h>
int main()
{
     int x, y, t;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &x, &y);
          printf("%d\n", (x*10)+(y*5));
     }
}
