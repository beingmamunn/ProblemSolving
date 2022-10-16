#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        int count=0;
        for(int i=a; i<=b; i++)
        {
            int x=sqrt(i);
            if(x*x==i)
                count++;
        }
        cout<<count<<endl;
    }
}
