#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(auto str : rsp)
    {
        if(str == '2')
            answer += '0';
        else if(str == '0')
            answer += '5';
        else
            answer += '2';
    }
    return answer;
}