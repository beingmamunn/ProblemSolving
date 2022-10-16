#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int d1, m1, y1, d2, m2, y2;
        char c;
        cin>>d2>>c>>m2>>c>>y2;
        cin>>d1>>c>>m1>>c>>y1;
        if (d1 > d2)
        {
            d2 = d2 + 30;
            m1 = m1 + 1;
        }
        if (m1 > m2)
        {
            m2 = m2 + 12;
            y1 = y1 + 1;
        }
        int age = y2 - y1;
        if (age < 0)
            cout<<"Case #"<<i<<": Invalid birth date"<<endl;
        else if (age > 130)
            cout<<"Case #"<<i<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<i<<": "<<age<<endl;
    }

}
