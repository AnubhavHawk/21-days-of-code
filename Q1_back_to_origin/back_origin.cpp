#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0, y = 0, z = 0;
    string s;
    cin>>n;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>s;
        if(s[1] == 'X' && s[0] == '-')
        {
            count++;
            x--;
        }
        if(s[1] == 'X' && s[0] == '+')
        {
            count++;
            x++;
        }
        if(s[1] == 'Y' && s[0] == '-')
        {
            y--;
            count++;
        }
        if(s[1] == 'Y' && s[0] == '+')
        {
            y++;
            count++;
        }
        if(s[1] == 'Z' && s[0] == '-')
        {
            count++;
            z--;
        }
        if(s[1] == 'Z' && s[0] == '+')
        {
            count++;
            z++;
        }
    }
    cout<<(count+abs(x)+abs(y)+abs(z));

    return 0;
}