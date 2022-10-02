#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int up=0, low=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
            up++;
        else low++;
    }
    if(up>low)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
}
