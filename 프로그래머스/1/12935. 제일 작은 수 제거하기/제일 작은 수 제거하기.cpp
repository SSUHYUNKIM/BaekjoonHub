#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) {
        return {-1};
    }
    
    int minValue = *min_element(arr.begin(), arr.end());
    
    for (int num : arr) {
        if (num != minValue) {
            answer.push_back(num);
        }
    }
    
    return answer;
}