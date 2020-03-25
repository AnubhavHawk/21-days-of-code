// https://codeforces.com/contest/1015/problem/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m, count;
    
    cin>>n>>m;
    count = m;
    vector <int> result(m, 0);
    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin>>l>>r;
        for(int j = l; j <= r; j++)
        {
            if(result[j-1] == 0)
            {
                count--;
            }
            result[j-1] = 1; // not include in result
            
        }    
    }
    cout<<count<<endl;
    for(int i = 0; i < m; i++)
    {
        if(result[i] == 0)
            cout<<i+1<<" ";
    }
    return 0;
}