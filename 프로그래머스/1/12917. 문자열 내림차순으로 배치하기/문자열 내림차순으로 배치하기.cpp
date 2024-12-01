#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> vec;
        
    for(auto ss : s) { 
        vec.push_back(ss);
    }
    
    sort(vec.begin(), vec.end(), greater<>());
    
    for(auto v : vec) { 
        answer += v;
    }
        
    return answer;
}