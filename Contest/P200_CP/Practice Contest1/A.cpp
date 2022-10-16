#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int a, b;

    while(cin>>a>>b && a!=0 && b!=0)
    {
        float x;
        int y,i, count=0;

        for(i=a; i<=b; i++)
        {
            x=sqrt(i);
            y=sqrt(i);
            if(x==y)
                count++;
        }
        cout<<count<<endl;
    }
}
