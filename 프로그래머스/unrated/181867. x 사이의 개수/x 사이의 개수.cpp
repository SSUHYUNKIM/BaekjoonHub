#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    string temp = "";
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] != 'x')
            temp += myString[i];
        else
        {
            answer.push_back(temp.length());
            temp = "";
        }
    }
    
    answer.push_back(temp.length());
    return answer;
}
