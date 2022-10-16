#include<iostream>
using namespace std;
int main()
{
    long long n, sum=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        while(n>9)
        {
            sum=n%10;
            n=n/10;
            n=n+sum;
        }
        cout<<n<<endl;
    }
}
