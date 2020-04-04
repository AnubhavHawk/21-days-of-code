// https://www.codechef.com/CHPTRS01/problems/FUNRUN
#include<bits/stdc++.h>
#define vi vector<long long int>
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define fo(i, n) for(long long int i = 0; i < n; i++)
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
        int n;
        long long int max_a = 0, max_b = 0;
        cin>>n;
        vi a(n+1), b(n+1);
        fo(i, n)
        {
            cin>>a[i];
            if(max_a < a[i])
                max_a = a[i];
        }
        fo(i, n)
        {
            cin>>b[i];
            if(max_b < b[i])
                max_b = b[i];
        }
        if(max_a != max_b)
            cout<<"YES"<<done;
        else
            cout<<"NO"<<done;

    }
    return 0;
}