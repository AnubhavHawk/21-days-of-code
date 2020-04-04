<<<<<<< HEAD
// https://codeforces.com/contest/1330/problem/B
#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define fo(i, n) for(int i = 0; i < n; i++)
#define w(t) int t; cin>>t; while(t--)
#define done "\n"
using namespace std;
int main()
{
    w(t)
    {
        int n, max_1 = 0, max_2 = 0, result = 0;
        cin>>n;
        vi p1(n+1, 0), p2(n+1, 0), m(n+1);
        fo(i, n)
        {
            cin>>m[i];
        }
        // forward
        int i = 0;
        for(i = 0; i < n; i++)
        {
            // cout<<"element: "<<m[i]<<done;
            if(p1[m[i]] == 0)
            {
                // cout<<"value of p1: "<<p1[m[i]]<<done;
                if(max_1 < m[i])
                {
                    max_1 = m[i];
                }
                // cout<<"max1 = "<<max_1<<done;
                p1[m[i]]++;
            }
            else
            {
                // cout<<"breaking";
                break;
            }
                // break;
        }
        for(; i < n; i++)
        {
            // cout<<"element: "<<m[i]<<done;
            if(p2[m[i]] == 0)
            {
                // cout<<"value of p2: "<<p2[m[i]]<<done;
                if(max_2 < m[i])
                {
                    max_2 = m[i];
                }
                // cout<<"max2: "<<max_2<<done;
                p2[m[i]]++;
            }
            else
                break;
        }
        int count1 = 0, count2 = 0, flag1= 0, flag2 = 0;
        // cout<<"tr p1"<<done;
        for(int i = 1; i <= max_1; i++)
        {
            // cout<<"p1: "<<i<<done;
            if(p1[i] == 0)
            {
                // cout<<"i = "<<i;
                // cout<<"p1breaking"<<done;
                flag1 = 1;
                break;
            }
        }
        if(flag1 == 0)
        {
            // cout<<"flag != 1"<<done;
            for(int i = 1; i <= max_2; i++)
            {
                // cout<<"p2: "<<p2[i]<<done;
                if(p2[i] == 0)
                {
                    // cout<<"breaking"<<done;
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag1 == 0 && flag2 == 0)
        {
            result++;
            count1 = max_1;
            count2 = max_2;
        }

        //reverse
        // cout<<"now reverse\n";
        p1.assign(n, 0);
        p2.assign(n, 0);
        max_1 = 0, max_2 = 0, flag1 = 0, flag2 = 0;
        i = n-1;
        for(; i >= 0; i--)
        {
            // cout<<"element: "<<m[i]<<" i = " <<i<<done;
            if(p1[m[i]] == 0)
            {
                // cout<<"value of p1: "<<p1[m[i]]<<done;
                if(max_1 < m[i])
                {
                    max_1 = m[i];
                }
                // cout<<"max1 = "<<max_1<<done;
                p1[m[i]]++;
            }
            else
            {
                // cout<<"breaking";
                break;
            }
                // break;
        }
       
        // cout<<"now for loop";
        for(; i >= 0; i--)
        {
            // cout<<"element: "<<m[i]<<" "<<i<<done;
            if(p2[m[i]] == 0)
            {
                // cout<<"value of p2: "<<p2[m[i]]<<done;
                if(max_2 < m[i])
                {
                    max_2 = m[i];
                }
                // cout<<"max2: "<<max_2<<done;
                p2[m[i]]++;
            }
            else
                break;
        }
        int count3 = 0, count4 = 0;
        // cout<<"tr p1"<<done;
        for(int i = 1; i <= max_1; i++)
        {
            // cout<<"p1: "<<i<<done;
            if(p1[i] == 0)
            {
                // cout<<"i = "<<i;
                // cout<<"p1breaking"<<done;
                flag1 = 1;
                break;
            }
        }
        if(flag1 == 0)
        {
            // cout<<"flag != 1"<<done;
            for(int i = 1; i <= max_2; i++)
            {
                // cout<<"p2: "<<p2[i]<<done;
                if(p2[i] == 0)
                {
                    // cout<<"breaking"<<done;
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag1 == 0 && flag2 == 0)
        {
            result++;
            count3 = max_1;
            count4 = max_2;
        }
        if(result == 0)
        {
            cout<<0<<"\n";
            continue;
        }
        if(result == 1)
        {
            if(count1 != 0 && count2 != 0 && ( count1 + count2 == n))
                cout<<1<<"\n"<<count1<<" "<<count2<<done;
            else
                cout<<1<<"\n"<<count4<<" "<<count3<<done;
            continue;
        }
        else
        {
            
            if(count1 != 0 && count2 != 0 && (count3 + count4 == n) && ( count1 + count2 == n))
            {
                cout<<2<<done;
                cout<<count1<<" "<<count2<<done;
                cout<<count4<<" "<<count3<<done;
            }
            else
            {
                 cout<<0<<"\n";
            }
        }
    }
    return 0;
=======
// https://codeforces.com/contest/1330/problem/B
#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define fo(i, n) for(int i = 0; i < n; i++)
#define w(t) int t; cin>>t; while(t--)
#define done "\n"
using namespace std;
int main()
{
    w(t)
    {
        int n, max_1 = 0, max_2 = 0, result = 0;
        cin>>n;
        vi p1(n+1, 0), p2(n+1, 0), m(n+1);
        fo(i, n)
        {
            cin>>m[i];
        }
        // forward
        int i = 0;
        for(i = 0; i < n; i++)
        {
            // cout<<"element: "<<m[i]<<done;
            if(p1[m[i]] == 0)
            {
                // cout<<"value of p1: "<<p1[m[i]]<<done;
                if(max_1 < m[i])
                {
                    max_1 = m[i];
                }
                // cout<<"max1 = "<<max_1<<done;
                p1[m[i]]++;
            }
            else
            {
                // cout<<"breaking";
                break;
            }
                // break;
        }
        for(; i < n; i++)
        {
            // cout<<"element: "<<m[i]<<done;
            if(p2[m[i]] == 0)
            {
                // cout<<"value of p2: "<<p2[m[i]]<<done;
                if(max_2 < m[i])
                {
                    max_2 = m[i];
                }
                // cout<<"max2: "<<max_2<<done;
                p2[m[i]]++;
            }
            else
                break;
        }
        int count1 = 0, count2 = 0, flag1= 0, flag2 = 0;
        // cout<<"tr p1"<<done;
        for(int i = 1; i <= max_1; i++)
        {
            // cout<<"p1: "<<i<<done;
            if(p1[i] == 0)
            {
                // cout<<"i = "<<i;
                // cout<<"p1breaking"<<done;
                flag1 = 1;
                break;
            }
        }
        if(flag1 == 0)
        {
            // cout<<"flag != 1"<<done;
            for(int i = 1; i <= max_2; i++)
            {
                // cout<<"p2: "<<p2[i]<<done;
                if(p2[i] == 0)
                {
                    // cout<<"breaking"<<done;
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag1 == 0 && flag2 == 0)
        {
            result++;
            count1 = max_1;
            count2 = max_2;
        }

        //reverse
        // cout<<"now reverse\n";
        p1.assign(n, 0);
        p2.assign(n, 0);
        max_1 = 0, max_2 = 0, flag1 = 0, flag2 = 0;
        i = n-1;
        for(; i >= 0; i--)
        {
            // cout<<"element: "<<m[i]<<" i = " <<i<<done;
            if(p1[m[i]] == 0)
            {
                // cout<<"value of p1: "<<p1[m[i]]<<done;
                if(max_1 < m[i])
                {
                    max_1 = m[i];
                }
                // cout<<"max1 = "<<max_1<<done;
                p1[m[i]]++;
            }
            else
            {
                // cout<<"breaking";
                break;
            }
                // break;
        }
       
        // cout<<"now for loop";
        for(; i >= 0; i--)
        {
            // cout<<"element: "<<m[i]<<" "<<i<<done;
            if(p2[m[i]] == 0)
            {
                // cout<<"value of p2: "<<p2[m[i]]<<done;
                if(max_2 < m[i])
                {
                    max_2 = m[i];
                }
                // cout<<"max2: "<<max_2<<done;
                p2[m[i]]++;
            }
            else
                break;
        }
        int count3 = 0, count4 = 0;
        // cout<<"tr p1"<<done;
        for(int i = 1; i <= max_1; i++)
        {
            // cout<<"p1: "<<i<<done;
            if(p1[i] == 0)
            {
                // cout<<"i = "<<i;
                // cout<<"p1breaking"<<done;
                flag1 = 1;
                break;
            }
        }
        if(flag1 == 0)
        {
            // cout<<"flag != 1"<<done;
            for(int i = 1; i <= max_2; i++)
            {
                // cout<<"p2: "<<p2[i]<<done;
                if(p2[i] == 0)
                {
                    // cout<<"breaking"<<done;
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag1 == 0 && flag2 == 0)
        {
            result++;
            count3 = max_1;
            count4 = max_2;
        }
        if(result == 0)
        {
            cout<<0<<"\n";
            continue;
        }
        if(result == 1)
        {
            if(count1 != 0 && count2 != 0 && ( count1 + count2 == n))
                cout<<1<<"\n"<<count1<<" "<<count2<<done;
            else
                cout<<1<<"\n"<<count4<<" "<<count3<<done;
            continue;
        }
        else
        {
            
            if(count1 != 0 && count2 != 0 && (count3 + count4 == n) && ( count1 + count2 == n))
            {
                cout<<2<<done;
                cout<<count1<<" "<<count2<<done;
                cout<<count4<<" "<<count3<<done;
            }
            else
            {
                 cout<<0<<"\n";
            }
        }
    }
    return 0;
>>>>>>> b1b540a4787d6edd6d8df0e1588dbe81fb1fe676
}