#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, count=1;
        scanf("%d", &n);
        int arr[n+5];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<n; i++)
        {
             if(arr[i]>arr[i+1])
            {
                count--;
            }
        }
        if(count==1)
            printf("Yes\n");
        else printf("No\n");

    }
}
