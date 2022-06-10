#include<stdio.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int pa, pb, qa, qb, a, b;
          scanf("%d %d %d %d", &pa, &pb, &qa, &qb);
          if(pa>pb)
               a=pa;
          else a=pb;
          if(qa>qb)
               b=qa;
          else b=qb;
          if(a<b)
               printf("P\n");
          else if(a==b)
               printf("TIE\n");
          else if(a>b)
               printf("Q\n");
     }
}
