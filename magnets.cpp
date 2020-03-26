// https://codeforces.com/contest/344/problem/A
#include<iostream>
using namespace std;
int main()
{
    int n, g_count = 1;
    cin>>n;
    char prev = '#';
    for(int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if(s[1] != prev)
            g_count++;
        prev = s[1];
    }
    cout<<g_count-1<<endl;
    return 0;
}