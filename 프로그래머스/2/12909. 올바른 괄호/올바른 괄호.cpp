#include<string>
#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

bool solution(string s)
{
   
    for(auto ss : s)
    {
        if(ss == ')')
        {
            if(st.empty())
                return false;
            else
                st.pop();
        }
        else
            st.push(ss);
    }

    return st.empty();
}