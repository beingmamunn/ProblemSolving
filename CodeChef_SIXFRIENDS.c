#include<stdio.h>
int main()
{
     int t, x, y;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &x, &y);
          if((x*3)<=(y*2))
               printf("%d\n", x*3);
          else printf("%d\n", y*2);

     }
}
