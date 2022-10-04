#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n[10000];
    cin>>n;
    int count=0;
    for(int i=0; n[i]!='\0'; i++)
    {
        if(n[i]=='4' || n[i]=='7')
            count++;
    }
    if(count==4 || count==7)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
