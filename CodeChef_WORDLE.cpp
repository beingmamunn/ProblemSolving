#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          string a, b, m="";
          cin>>a>>b;
          for(int i=0; i<5; i++)
          {
               if(a[i]==b[i])
                    m=m+"G";
               else m=m+"B";
          }
          cout<<m<<endl;
     }
}
