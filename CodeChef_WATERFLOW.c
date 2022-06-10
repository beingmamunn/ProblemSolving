#include<stdio.h>
int main()
{
    int t, w, x, y, z;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d", &w, &x, &y, &z);
        if(((y*z)+w)==x)
            printf("filled\n");
        else if(((y*z)+w)<x)
            printf("Unfilled\n");
        else if(((y*z)+w)>x)
            printf("overFlow\n");

     }
}

