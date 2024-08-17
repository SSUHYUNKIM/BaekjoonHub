#include<string>
#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

bool solution(string s)
{
    for(auto str : s) {
        if(st.empty()) {
            st.push(str);
        } else {
            if(str == '(') {
                st.push(str);
            } else if(st.top() == '(') {
                st.pop();
            }
        }
    }
    
    return st.empty();
}