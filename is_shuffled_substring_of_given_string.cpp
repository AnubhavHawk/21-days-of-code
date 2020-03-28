// https://www.geeksforgeeks.org/check-if-the-given-string-is-shuffled-substring-of-another-string/
#include<iostream>
using namespace std;
string check(string s1, string s2)
{
    if(s1.length() > s2.length())
        return "NO";
    int freq[26] = {0};
    for(int i = 0; i < s1.size(); i++)
        freq[s1[i] - 'a']++;
    for(int i = 0; i < s2.size(); i++)
        freq[s2[i] - 'a']--;
    for(int i = 0; i < 26; i++)
        if(freq[i] > 0)
            return "NO";
    return "YES";

}
int main()
{
    string s1 = "onetwofour";
    string s2 = "hellofourtwooneworld";
    cout<<check(s1, s2);
    return 0;
}