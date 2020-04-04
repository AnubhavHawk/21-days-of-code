// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020993c
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
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int x = 0;
    w(t)
    {
        x++;
        int n, k = 0, r=0 , c=0;
        cin>>n;
        vector < vector<int> > a(n+1,vector<int>(n+1));
        
        int prev_s_size = 0, prev_r_size = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i = 0; i < n; i++)
        {
            int r_flag = 0, c_flag = 0;
            k += a[i][i];
            set<int> freqC;
            set<int> freqR;
            for(int j = 0; j < n; j++)
            {
                // cout<<"col: "<<a[i][j]<<done;
                prev_s_size = freqC.size();
                freqC.insert(a[i][j]);
                if(prev_s_size == freqC.size())
                    c_flag = 1;
                // cout<<"row: "<<a[j][i]<<done;    
                prev_r_size = freqR.size();
                freqR.insert(a[j][i]);
                if(prev_r_size == freqR.size())
                    r_flag = 1;
            }
            if(r_flag == 1)
                r++;
            if(c_flag == 1)
                c++;
        }
        cout<<"Case #"<<x<<": "<<k<<" "<<c<<" "<<r<<done;
    }
    return 0;
}