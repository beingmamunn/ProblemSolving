#include<stdio.h>
int main()
{
     int t, x, y;
     scanf("%d", &t);
     while(t--)
     {
          int temp;
          scanf("%d %d", &x, &y);
          if(x<y)
               printf("%d\n", y-x);
          else printf("%d\n", x-y);
     }
}
