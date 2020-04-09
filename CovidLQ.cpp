// https://www.codechef.com/APRIL20B/problems/COVIDLQ
#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define fi first
#define sec second
#define fo(i, n) for(int i = 0; i < n; i++)
#define w(t) int t; cin>>t; while(t--)
#define done "\n"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t > 0)
    {
        t--;
        int n, x;
        cin>>n;
        int curr = 0, prev = 0, flag = 0;
        fo(i, n)
        {
            cin>>x;
            if(x == 1)
            {
                prev = curr;
                curr = i+1;
                if(prev == 0 && curr > 0)
                {
                    flag = 0;
                    continue;
                }
                if(curr - prev < 6)
                    flag = 1;
            }
        }
        if(flag != 1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO"<<done;
        }
    }
    return 0;
}