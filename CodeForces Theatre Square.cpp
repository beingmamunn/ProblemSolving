#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m, n, a;
    cin>>m>>n>>a;
    long long res=((m+a-1)/a)*((n+a-1)/a);
    cout<<res<<endl;
}
