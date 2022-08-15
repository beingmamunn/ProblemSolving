#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n, p, q;
     cin>>n;
     cin>>p;
     set<int>s;
     int arr1[p+5];
     for(int i=0; i<p; i++)
     {
          cin>>arr1[i];
          s.insert(arr1[i]);
     }
     cin>>q;
     int arr2[q+5];
     for(int i=0; i<q; i++)
     {
          cin>>arr2[i];
          s.insert(arr2[i]);
     }
     if(s.size()==n)
          cout<<"I become the guy."<<endl;
     else cout<<"Oh, my keyboard!"<<endl;

}
