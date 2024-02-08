#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int divider = 2;
    
    while(n != 1)
    {
        if(n % divider == 0)
        {
            if(find(answer.begin(),answer.end(),divider) == answer.end()) 
                answer.push_back(divider);
            n /= divider;
        }
        else
            divider++;
    }
    return answer;
}