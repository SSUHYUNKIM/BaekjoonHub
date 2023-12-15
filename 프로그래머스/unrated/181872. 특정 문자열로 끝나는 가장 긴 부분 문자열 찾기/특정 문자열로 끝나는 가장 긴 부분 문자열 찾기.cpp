#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int pos = myString.rfind(pat);
    answer = myString.substr(0, pos + pat.size());
    return answer;
}