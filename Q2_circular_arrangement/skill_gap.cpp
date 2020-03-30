#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n;
    vector <int> a(n+1); 
    cin>>k;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int min = INT_MAX, count = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(abs(a[i] - a[j]) <= k)
            {
                // cout<<a[i] <<" valid "<<  a[j]<<"\n";
                count++;
            }
        }
        if(min > count)
        {
            min = count;
            count = 0;
        }
    }
    // cout<<"min = "<<min;
    cout<<min*n<<"\n";
    return 0;
}