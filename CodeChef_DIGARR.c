#include<stdio.h>
#include<string.h>
int main()
{
     int t, n;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d", &n);
          char d[n];
          int count=0, i;
          scanf("%s", &d);
          for (i=0; i<n; i++)
          {
               if (d[i]=='0' || d[i]=='5')
                    count++;
          }
          if (count>0)
               printf ("Yes\n");
          else printf ("No\n");

     }
}
