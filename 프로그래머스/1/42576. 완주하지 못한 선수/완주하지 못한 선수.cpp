#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> participant_map;

    for (auto part : participant) {
        participant_map[part]++;
    }

    for (auto comp : completion) {
        participant_map[comp]--;
    }

    for (auto part : participant_map) {
        if (part.second > 0) {
            return part.first;
        }
    }

    return ""; 
}