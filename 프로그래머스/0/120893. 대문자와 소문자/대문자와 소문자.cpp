#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto str : my_string)
    {
        if(islower(str))
            answer += toupper(str);
        else
            answer += tolower(str);
    }
    return answer;
}