#include<iostream>
using namespace std;
int main()
{
     int n, k, i, count=0;
     cin>>n>>k;
     int arr[n+5];
     for(i=1; i<=n; i++)
     {
          cin>>arr[i];

     }
     for(i=1; i<=n; i++)
     {
          if(arr[i]>=arr[k]&&arr[i]>0)
               count++;
     }

     cout<<count<<endl;

}
