#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(auto number : numbers)
    {
        if(answer > n)
            break;
        answer += number;
    }
    return answer;
}