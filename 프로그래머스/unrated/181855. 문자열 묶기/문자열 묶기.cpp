#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> len(31, 0);
    
    for(int i = 0; i < strArr.size(); ++i) 
    {
        len[strArr[i].size()]++;
        answer = max(answer, len[strArr[i].size()]);
    }
    return answer;
}