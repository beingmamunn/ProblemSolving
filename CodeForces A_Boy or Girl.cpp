#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int len=s.length();
    int count;
    for (int i=0; i<len; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    if((len-count)%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
}
