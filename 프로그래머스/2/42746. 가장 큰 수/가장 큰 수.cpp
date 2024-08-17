#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    vector<string> strNumbers;

    for (int num : numbers) {
        strNumbers.push_back(to_string(num));
    }
    
    sort(strNumbers.begin(), strNumbers.end(), compare);

    string answer = "";
    for (string str : strNumbers) {
        answer += str;
    }
    
    if (answer[0] == '0') {
        return "0";
    }
    
    return answer;
}