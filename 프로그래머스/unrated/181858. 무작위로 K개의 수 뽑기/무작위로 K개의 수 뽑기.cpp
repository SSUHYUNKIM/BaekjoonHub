#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(auto a : arr)
    {
        if(find(answer.begin(), answer.end(), a) == answer.end() && answer.size() < k)
            answer.push_back(a);
    }
    
    while (answer.size() < k)
        answer.push_back(-1);
    return answer;
}