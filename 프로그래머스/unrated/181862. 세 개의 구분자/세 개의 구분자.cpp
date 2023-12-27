#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp = "";
    
    for(auto str : myStr)
    {
        if(str == 'a' || str == 'b' || str == 'c')
        {
            if(temp != "")
            {
                answer.push_back(temp);
                temp = "";
            }
        }
        else
            temp += str;
    }
    
    if(temp != "")
        answer.push_back(temp);
    if(answer.empty())
        answer.push_back("EMPTY");
    
    return answer;
}