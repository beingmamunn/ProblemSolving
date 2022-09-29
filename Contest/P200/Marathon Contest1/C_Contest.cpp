#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int m1=((3*a)/10);
    int m2=(a-(a/250)*c);
    int v1=((3*b)/10);
    int v2=(b-(b/250)*d);
    int m=max(m1, m2);
    int v=max(v1, v2);
    if(m>v)
        cout<<"Misha"<<endl;
    else if(m<v)
        cout<<"Vasya"<<endl;
    else cout<<"Tie"<<endl;

}
