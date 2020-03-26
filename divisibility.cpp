// https://codeforces.com/contest/1328/problem/0
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a, b;
        cin>>a>>b;
        if(a < b)
        {
            cout<<b - a<<endl;
            continue;
        }
        if(a % b == 0)
        {
            cout<<0<<endl;
            continue;
        }        
        else
        {
            cout<<(b - (a % b))<<endl;
        }
    }
    return 0;
}