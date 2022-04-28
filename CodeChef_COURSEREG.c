#include<stdio.h>
int main()
{
     int t, n, m, k;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d %d", &n, &m, &k);
          if(n<=(m-k))
               printf("YES\n");
          else printf("NO\n");
     }
}
