#include<stdio.h>
int main()
{
     int t, x;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d", &x);
          if (10-x>=3)
               printf("Yes\n");
          else printf("No\n");
     }
     return 0;
}
