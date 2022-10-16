#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str, temp;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!='+')
            temp=temp+str[i];
    }
    sort(temp.begin(), temp.end());
    cout<<temp[0];
    for(int i=1; i<temp.size(); ++i)
    {
        cout<<"+"<<temp[i];
    }
}
