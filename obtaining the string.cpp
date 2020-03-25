// https://codeforces.com/contest/1015/problem/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s, t;
    cin>>s>>t;
    vector <int> result;
    for(int i = 0; i < n; i++)
    {
        // cout<<"main loop: "<<s;
        if(s[i] == t[i])
            continue;
        int pos = -1;
        for(int j = i + 1; j < n; j++)
        {
            // cout<<"\nfinding: "<<j<<" i = "<<i<<endl;
            if(t[i] == s[j])
            {
                // cout<<"\nfound at: "<<j<<endl;
                pos = j;
                break;
            }
        }
        if(pos == -1)
        {
            // cout<<"\nbreaking\n";
            cout<<-1<<endl;
            return 0;
        }
        else
        {
            // cout<<"\nswapping: ";
            for(int k = pos - 1; k >= i; k--)
            {
                swap(s[k], s[k+1]);
                result.push_back(k+1);
            };
        }
    
    }
    cout<<result.size()<<endl;
    for(int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}