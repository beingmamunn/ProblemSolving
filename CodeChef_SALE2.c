#include<stdio.h>
int main()
{
     int t, item, rupees;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &item, &rupees);
          printf("%d\n", ((item/3)*2+item%3)*rupees);
     }
}
