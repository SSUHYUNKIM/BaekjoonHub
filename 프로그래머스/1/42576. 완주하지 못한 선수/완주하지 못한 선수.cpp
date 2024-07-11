#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> participant_map;

    
    for(auto part : participant) {
        participant_map[part]++;
    }
    
    for(auto com : completion) {
        participant_map[com]--;
    }
    
    for(auto part : participant) {
        if(participant_map[part] != 0) {
            answer = part;
        }
    }
    
    return answer;
}