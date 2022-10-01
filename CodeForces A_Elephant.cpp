#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, res=0;
    cin>>x;
    res=res+x/5;
    x=x%5;
    res=res+x/4;
    x=x%4;
    res=res+x/3;
    x=x%3;
    res=res+x/2;
    x=x%2;
    res=res+x/1;
    x=x%1;
    cout<<res<<endl;
}
