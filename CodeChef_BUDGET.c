#include<stdio.h>
int main()
{
     int t, x, y;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &x, &y);
          if(x>=(y*30))
               printf("YES\n");
          else printf("NO\n");
     }
}
