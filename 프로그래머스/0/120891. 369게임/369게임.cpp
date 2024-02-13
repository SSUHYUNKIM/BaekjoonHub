#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string ord = to_string(order);
    for(auto o : ord)
    {
        if((o - '0') != 0 && (o - '0') % 3 == 0)
            answer++;
    }
    return answer;
}