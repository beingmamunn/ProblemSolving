#include<stdio.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int x, y, z;
          scanf("%d %d %d", &x, &y, &z);
          int c=((x*5)+(y*10));
          int a=c/z;
          printf("%d\n", a);
     }
}
