#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          char s[5], s1[]="yes";
          cin>>s;
          strlwr(s);
          int res=strcmp(s,s1);
          if(res==0)
          {
               cout<<"YES"<<endl;
          }
          else cout<<"NO"<<endl;
     }

}
