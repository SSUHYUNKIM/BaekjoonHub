#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = INT_MIN;
    int maxIndex = -1;
        
    for(int i = 0; i < array.size(); i++) {
        if(array[i] > max) {
            max = array[i];
            maxIndex = i;
        }          
    }
        
    answer.push_back(max);
    answer.push_back(maxIndex);
    return answer;
}