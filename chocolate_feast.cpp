// https://www.hackerrank.com/contests/codenigma-7/challenges/chocolate-feast
#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    int choco = n/c;
    int wrapp = choco , rem, a ;
    while( wrapp/m != 0)              
    {
        a=wrapp/m;
        choco += a;
        rem = wrapp%m;
        wrapp = rem + a;
    }    
    return choco;

}
int main()
{
    int n = 15, c = 3, m  = 2;
    cout<<chocolateFeast(n, c, m);
    return 0;
}
