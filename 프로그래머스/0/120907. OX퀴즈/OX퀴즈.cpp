#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (auto q : quiz) {
        stringstream ss(q);
        int X, Y, Z;
        string operator_sign, equal_sign;
        
        ss >> X >> operator_sign >> Y >> equal_sign >> Z;
        
        int result = 0;
        if (operator_sign == "+") {
            result = X + Y;
        } else if (operator_sign == "-") {
            result = X - Y;
        }
        
        if (result == Z) {
            answer.push_back("O");
        } else {
            answer.push_back("X");
        }
    }
    
    return answer;
}