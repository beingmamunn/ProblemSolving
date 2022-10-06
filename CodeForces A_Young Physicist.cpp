#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[5], res=0;
    cin>>n;
    while(n--)
    {
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
            res=res+arr[0];
        }
    }
    if(res==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
