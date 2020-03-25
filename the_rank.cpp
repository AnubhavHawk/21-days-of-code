// https://codeforces.com/contest/1017/problem/A
#include<iostream>
using namespace std;
int main()
{
    int n, rank = 1, sum = 0, c_sum = 0;
    int a, b, c, d;
    cin>>n;
    for(int i = 0; i < 4; i++) //thomas marks total
    {
        cin>>a;
        sum += a;
    }
    for(int i = 1; i < n; i++)
    {
        cin>>a>>b>>c>>d;
        if(i % 4 == 0)
        {
            c_sum = 0;  // next student's marks
        }
        c_sum = a+b+c+d;
        if(sum < c_sum)
            rank++;
    }
    cout<<rank<<endl;
    return 0;
}