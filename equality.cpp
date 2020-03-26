// The new world believes in equality for everyone and that they must have equal rights and individual identity, regardless of what they are and from where they belong. In this problem, everyone should be present equally. The string may contain lowercase alphabets, uppercase alphabets, numbers or other characters but everyone should exist equally. If the string is such then print "Equality For Everyone" otherwise print "No Equality".

// Input Format
// The first line of input consists of numbers of test cases, T.
// Next T lines consist of strings to check.

// Constraints
// 1<= T <=10
// 1<= |string| <=1000

// Output Format
// Print the required output.

// Sample TestCase 1
// Input
// 3
// aaabbBBAAA12345)(*&^
// aa11BB!!!!!!
// aWsEdR1!2@3#

// Output
// Equality For Everyone
// No Equality
// Equality For Everyone

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l = 0, u = 0, special = 0, num = 0;
        string s;
        cin>>s;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 97 && s[i] <= 122)
            {
                l++;
                continue;
            }
            if(s[i] >= 65 && s[i] <= 90)
            {
                u++;
                continue;
            }
            if(s[i] >= 48 && s[i] <= 57)
            {
                num++;
                continue;
            }
            else
                special++; // special chars
        }
        if((l == u && u == special && special == num) )
        {
            cout<<"Equality For Everyone"<<endl;
        }
        else
            cout<<"No Equality"<<endl;
    }
    return 0;
}
