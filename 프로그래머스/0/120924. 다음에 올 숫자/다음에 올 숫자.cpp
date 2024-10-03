#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    if(common[2] - common[1] == common[1] - common[0]) {
        int diff = common[2] - common[1];
        answer = common[common.size() - 1] + diff;
    } else {
        int diff = common[1] / common[0];
        answer = common[common.size() - 1] * diff;
    }
    
    return answer;
}