#include<stdio.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int x=0, y=0, n;
          scanf("%d", &n);
          char a[10];
          for(int i=0; i<n; i++)
          {
               scanf("%s", a);
               if(a[0]=='S')
                    x++;
               else if(a[0]=='L')
                    y++;
          }
          printf("%d %d\n", x, y);
     }
}
