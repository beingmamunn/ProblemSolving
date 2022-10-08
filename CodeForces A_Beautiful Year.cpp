#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(1)
    {
        n++;
        int a=n%10;
        int x=n/10;
        int b=x%10;
        int y=x/10;
        int c=y%10;
        int z=y/10;
        int d=z%10;

        if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d && c!=d)
            break;
    }

    cout<<n<<endl;
}
