#include<bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
    int sum = 0; 
    while(n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    // generate primes
    int size;
    if(n % 10 == 0)
        size = digitSum(n-1) + digitSum(n-2);
    else
        size = digitSum(n) + digitSum(n-1);
    vector <int> primes(size+1, 1);
    primes[0] = 0; // 0 and 1 aren't primes
    primes[1] = 0;
    
    for(int i = 0; i <= size; i++)
    {
        if(primes[i] == 1)
        {
            for(int j = 2; i*j <= size; j++)
            {
                primes[j*i] = 0;
            }
        }
    }
    int count = 0;
    for(int i = 0; i <= n-1; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            int s = digitSum(i) + digitSum(j);
            if(primes[s] == 1)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}