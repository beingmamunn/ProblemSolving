#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int x=0;
     while(n--)
     {
          string s;
          cin>>s;
          if(s[0]=='X' && s[2]=='+')
          {
               x++;
          }
          else if(s[0]=='+')
          {
               ++x;
          }
          else if(s[0]=='X' && s[2]=='-')
          {
               x--;
          }
          else if(s[0]=='-')
          {
               --x;
          }

     }
     cout<<x<<endl;

}
