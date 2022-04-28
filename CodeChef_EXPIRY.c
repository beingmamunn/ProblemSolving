#include<stdio.h>
int main()
{
     int t, n, d, e;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d %d", &n, &d, &e);
          if(n<=(d*e))
               printf("Yes\n");
          else
               printf("No\n");
     }
}
