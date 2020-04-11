// https://codeforces.com/contest/1334/problem/B
#define ll long long int
#define done "\n"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        vector <ll> a(n+1);
        ll extra = 0, count = 0, sum = 0, j = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] > x)
            {
                extra += a[i] - x;
                j++;
            }
            sum += a[i];
        }
        if(sum >= n*x)
        {
            cout<<n<<done;
            continue;
        }
        sort(a.rbegin(), a.rend());
        for(ll i = j; i < n; i++)
        {
            if(a[i] < x && a[i] + extra >= x)
            {
                extra = extra - x - a[i];
                count++;
            }
            else
                break;
        }
        cout<<count+j<<done;
    }
    return 0;
}