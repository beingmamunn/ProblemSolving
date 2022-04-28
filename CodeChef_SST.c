#include<stdio.h>
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if ((a*10)==(b*5))
            printf("ANY\n");
        else if((a*10)<(b*5))
                printf("SECOND\n");
        else printf("FIRST\n");

     }
}
