#include<stdio.h>
int main()
{
     int t, x, y;
     scanf("%d", &t);
     while(t--)
     {
          int a=2, b=4;
          scanf("%d %d", &x, &y);
          int ab=(500-(a*2))+(1000-((x+y)*4));
          int ba=(1000-((y*4)))+(500-((x+y)*2));
          if(ab>ba)
               printf("%d\n", ab);
          else printf("%d\n", ba);
     }

}
