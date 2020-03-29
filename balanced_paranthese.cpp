// if there is proper arrangements of braces then output "Balanced" otherwise output "Unbalanced";
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "()(){}[[]]({})({)";
    stack <char> store;
    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] == ')' || s[i] == '}' || s[i] == ']') && store.empty())
        {    
            cout<<"Unbalanced\n";
            return 0;
        }
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {    
            // cout<<"pushing"<<s[i]<<"\n";
            store.push(s[i]);
        }
        else
        {
            // cout<<s[i]<<" != "<<store.top()<<"\n";
            if((s[i] == ')' && store.top() != '(') || (s[i] == ']' && store.top() != '[') || (s[i] == '}' && store.top() != '{'))
            {
                cout<<"Unbalanced\n";
                return 0;
            }
            else
            {
                // cout<<"popping"<<store.top()<<"\n";
                store.pop();
            }    
        }
    }
    cout<<"Balanced";
    return 0;
}