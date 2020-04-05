// https://www.codechef.com/CHPTRS01/problems/CARLOT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t > 0)
    {
        t--;
        int n, m, count = 0, pos_i = 0, pos_j = 0;
        cin>>n>>m;
        vector <vector<char> > parkings(n,vector<char>(m));
        vector<pair<int, int> > occ(n, make_pair(0, 0));
        char x;
        int f = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>x;
                if(x == 'P' && f == 0)
                {
                    occ[i].first = j;
                    f = 1;
                }
                if(x == 'P')
                {
                    occ[i].second = j;
                }
            }
            f = 0;
        }
        for(int i = 0; i < n; i++)
        {
            if(i%2 == 0)
            {
                if(i == n-1)
                {
                    count += occ[i].second - occ[i].first;
                }
                else
                {
                    if(occ[i+1].second > occ[i].second)
                    {
                        count += occ[i+1].second - occ[i].first;
                    }
                    else
                    {
                        count += occ[i].second - occ[i].first;
                    }
                }
            }
            else
            {
                if(i == n-1)
                {
                    if(occ[i].second < occ[i-1].second)
                        count += occ[i-1].second - occ[i].first;
                    else
                        count += occ[i-1].second - occ[i].first;
                }
                else
                {
                    if(occ[i+1].first < occ[i].first)
                    {
                        if(occ[i].second < occ[i-1].second)
                            count += occ[i-1].second - occ[i+1].first;
                        else
                            count += occ[i].second - occ[i+1].first;                            
                    }
                    else
                    {
                        if(occ[i].second < occ[i-1].second)
                            count += occ[i-1].second - occ[i].first;
                        else
                            count += occ[i-1].second - occ[i].first;
                    }
                }
            }
        }
        cout<<count+n-1;
    }
    return 0;
}