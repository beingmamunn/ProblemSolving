#include<stdio.h>
int main()
{
     int t, x, a, b;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d %d", &x, &a, &b);
          if(x<=((a*1)+(b*2)))
               printf("Qualify\n");
          else
               printf("NotQualify\n");
     }
}
