#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[10][10], x, y;
     for(int i=1; i<=5; i++)
     {
          for(int j=1; j<=5; j++)
          {
               cin>>arr[i][j];

               if(arr[i][j]==1)
               {
                    x=abs(3-i);
                    y=abs(3-j);
               }
          }
     }
     int ans=x+y;
     cout<<ans<<endl;
}
