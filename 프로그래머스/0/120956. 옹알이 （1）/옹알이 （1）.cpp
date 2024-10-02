#include <string>
#include <vector>
#include <regex>

using namespace std;

vector<string> v = {"aya", "ye", "woo", "ma"};

int solution(vector<string> babbling) {
    int answer = 0;
    
    regex pattern("^(aya|ye|woo|ma)+$");

    for (string bab : babbling) {
        if (regex_match(bab, pattern)) {
            answer++;
        }
    }
    
    return answer;
}