#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s, s1="hello";
    cin>>s;
    int count=0, j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s1[j])
        {
            count++;
            j++;
            if(count==5)
            {
                break;
            }
        }
    }
    if(count==5)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
