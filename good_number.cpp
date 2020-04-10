// https://codeforces.com/contest/365/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,a,s,p=0,c=0;
    cin>>n>>k;
    int ar[10]={0};
    for(int i=0;i<n;i++)
    {
        p=0;
        cin>>a;
        s=a;
        while(s>0)
        {
            ar[s%10]=1;
            s=s/10;
        }
        for(int i=0;i<10;i++)
        {
            if(i<=k)
            {
                if(ar[i]!=0)
                {
                    p++;
                }
                ar[i]=0;
            }
        }
        if(p-1==k)
        {
            c++;
        }
    }

    cout<<c;
    return 0;
}