// In English, there are two types of characters, vowels and consonants. Romi is a student in school and is new to computers. He knows about vowels and consonants but does not know how to write code to get the correct output. He needs your help to learn to code and print the number of vowels, consonants and the product of them. Help Romi understand the code.

// Input Format
// The first line of input consist of number of test cases, T.
// Next T lines consist of strings.

// Constraints
// 1<= T <=10
// 1<= |S| <=1000

// Output Format
// For each string print the number of vowels, number of consonants and the product of them space separately.

// Sample TestCase 1
// Input
// 2
// abcdefgh
// zxcvbnm
// Output
// 2 6 12
// 0 7 0
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c = 0, v = 0;
        string s;
        cin>>s;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else
                c++;
        }
        cout<<v<<" "<<c<<" "<<v*c<<endl;
    }
    return 0;
}
