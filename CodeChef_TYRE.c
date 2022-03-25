#include<stdio.h>
int main()
{
     int test, n, m;
     scanf("%d", &test);
     while(test--)
     {
          scanf("%d %d", &n, &m);
          printf("%d\n", (n*2)+(m*4));
     }
     return 0;
}
