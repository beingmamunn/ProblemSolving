#include<iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int r;
          cin>>r;
          if(r>=1900)
               cout<<"Division 1\n";
          else if(1899>=r&&r>=1600)
               cout<<"Division 2\n";
          else if(1599>=r&&r>=1400)
               cout<<"Division 3\n";
          else cout<<"Division 4\n";
     }
}
