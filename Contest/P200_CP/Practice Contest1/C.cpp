#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int a, b, c;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
            break;
        int x, y, z;
        if(a>b && a>c)
            {
                z=a;
                x=b;
                y=c;
            }
        else if (b>c && b>a)
            {
                z=b;
                x=a;
                y=c;
            }
        else
        {
            z=c;
            x=a;
            y=b;
        }
        if((x*x)+(y*y)==(z*z))
            cout<<"right"<<endl;
        else cout<<"wrong"<<endl;

    }
}
