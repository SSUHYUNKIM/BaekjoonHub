#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto str : my_string)
    {
        if(answer.find(str) == string::npos)
        {
            answer += str;
        }
    }
    return answer;
}