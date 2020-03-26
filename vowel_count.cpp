/* Read input from STDIN. Print your output to STDOUT*/
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
