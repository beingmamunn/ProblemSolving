#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char word[200];
        cin>>word;
        int len=strlen(word);
        int l=len-2;
        if(len>10)
        {
            cout<<word[0]<<l<<word[len-1]<<endl;
        }
        else cout<<word<<endl;
    }
}
