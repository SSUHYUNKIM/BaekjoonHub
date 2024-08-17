#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> clothes_map;
    
    for(auto cloth : clothes) {
        clothes_map[cloth[1]]++;
    }
    
    for (auto clothes : clothes_map) {
        answer *= (clothes.second + 1);
    }
    
    return answer - 1;
}