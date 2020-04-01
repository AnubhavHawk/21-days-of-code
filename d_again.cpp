// https://codeforces.com/contest/1331/problem/D
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(((int)s[6])&1)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    return 0;
}