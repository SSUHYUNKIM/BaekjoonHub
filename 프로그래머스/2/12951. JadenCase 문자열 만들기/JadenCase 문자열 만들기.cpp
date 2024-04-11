#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0; i < s.length(); i++)
    {
        if(i == 0)
            answer += toupper(s[i]);
        else if(s[i - 1] == ' ')
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
    }
    
    return answer;
}