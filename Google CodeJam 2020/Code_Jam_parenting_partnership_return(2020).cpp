// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020bdf9
#include<bits/stdc++.h>
using namespace std;
struct task{
    int start, finish, time_tt;
};
bool compare(task t1, task t2) 
{ 
    return (t1.finish < t2.finish); 
}
bool compare_time_tt(task t1, task t2)
{
    return (t1.time_tt < t2.time_tt);
}
int main()
{
    int t, a = 0;
    cin>>t;
    while(t--)
    {
        a++;
        int n, start, finish;
        cin>>n;
        vector<task> v, v_original;
        string ans = "";
        for(int i = 0; i < n; i++)
        {
            task tt;
            cin>>tt.start>>tt.finish;
            tt.time_tt = i;
            v.push_back(tt);
        }
        sort(v.begin(), v.end(), compare);
        v_original = v;
        vector<task> Cameron, Jamie;
        // for(int i = 0; i < n; i++)
        //     cout<<"value: "<<v[i].start<<", "<<v[i].finish<<", "<<v[i].time_tt<<"\n";
        int i = 0;
        Jamie.push_back(v[0]);
        vector <task> remain;
        for (int j = 1; j < v.size(); j++) 
        { 
            // cout<<v[j].start<<", "<<v[j].finish<<", "<<v[j].time_tt<<"i = "<<i<<"j: "<<j<<endl;
            if (v[j].start >= v[i].finish) 
            { 
                Jamie.push_back(v[j]);
                i = j; 
            }
            else
                remain.push_back(v[j]);
        }
        // cout<<"Jamie: \n";
        // for(int i = 0; i < Jamie.size(); i++)
        //     cout<<Jamie[i].start<<", "<<Jamie[i].finish<<", "<<Jamie[i].time_tt<<endl;
        // cout<<"remaining: \n";
        // for(int i = 0; i < remain.size(); i++)
        //     cout<<remain[i].start<<", "<<remain[i].finish<<", "<<remain[i].time_tt<<endl;
        i = 0;
        int flag = 0;
        if(remain.size() == 0)
        {
            cout<<"Case #"<<a<<": ";
            for(int x = 0; x < Jamie.size(); x++)
                cout<<"J";
            cout<<"\n";
            continue;
        }
        Cameron.push_back(remain[0]);
        for (int j = 1; j < remain.size(); j++) 
        { 
            // cout<<"Element: "<<v[j].start<<", "<<v[j].finish<<", "<<v[j].time_tt<<endl;
            if (remain[j].start >= remain[i].finish) 
            { 
                // cout<<"Counting in: "<<v[j].start<<", "<<v[j].finish<<", "<<v[j].time_tt<<endl;
                Cameron.push_back(remain[j]);
                i = j; 
            }
            else
            {
                // cout<<"Not counting in: "<<v[j].start<<", "<<v[j].finish<<", "<<v[j].time_tt<<endl;
                // cout<<"breaking\n";
                flag = 1;
                break;
            } 
        }
        // cout<<"Cameron: \n" ;
        // for(int i = 0; i < Cameron.size(); i++)
        //     cout<<Cameron[i].start<<", "<<Cameron[i].finish<<", "<<Cameron[i].time_tt<<endl;
        if(flag == 1)
        {
            cout<<"Case #"<<a<<": "<<"IMPOSSIBLE\n";
            continue;
        }
        else
        {
            ans = "";
            // cout<<"\n\none and only: \n";
            // for(int i = 0; i < Jamie.size(); i++)
            //     cout<<Jamie[i].start<<", "<<Jamie[i].finish<<", "<<Jamie[i].time_tt<<endl;
            // cout<<"second: \n";
            // for(int i = 0; i < Cameron.size(); i++)
            //     cout<<Cameron[i].start<<", "<<Cameron[i].finish<<", "<<Cameron[i].time_tt<<endl;
        
            flag = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < Jamie.size(); j++)
                {
                    if(Jamie[j].time_tt == i)
                    {
                        ans += "J";
                        flag = 1;
                        break;
                    }
                    
                }
                if(flag == 1)
                {
                    flag = 0;
                    continue;
                }
                for(int j = 0; j < Cameron.size(); j++)
                {
                    if(Cameron[j].time_tt == i)
                    {
                        ans += "C";
                        break;
                    }
                }
            }
            cout<<"Case #"<<a<<": "<<ans<<"\n";
        }
            
    }
    return 0;
}