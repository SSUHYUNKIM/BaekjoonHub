#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(auto coffee : order)
    {
        if(coffee.find("americano") != string::npos)
            answer += 4500;
        else if(coffee.find("cafelatte") != string::npos)
            answer += 5000;
        else 
            answer += 4500;
        
    }
    return answer;
}