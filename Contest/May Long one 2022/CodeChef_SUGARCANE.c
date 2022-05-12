#include<stdio.h>
int main()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
          int n;
          int tw, th;
          scanf("%d", &n);
          tw=(50*n*((double)20/(double)100));
          th=(50*n*((double)30/(double)100));
          printf("%d\n", (50*n-(tw+tw+th)));
     }
}
