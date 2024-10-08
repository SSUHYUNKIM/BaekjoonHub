#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(auto a : array) {
        string strA = to_string(a);
        for(auto s : strA) {
            if(s == '7') {
                answer++;
            }
        }
    }
    return answer;
}