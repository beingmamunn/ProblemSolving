#include<stdio.h>
int main()
{
     int test, x;
     scanf("%d", &test);
     while (test--)
     {
          scanf("%d", &x);
          if(x<=15)
               printf("Yes\n");
          else printf("No\n");

     }
     return 0;

}
