#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s, t, temp;
    cin>>s>>t;
    reverse(s.begin(), s.end());
    if(s.compare(t)==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
