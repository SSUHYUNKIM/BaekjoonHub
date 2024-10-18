// 요구사항: 선행 스킬 순서과 유저들이 만든 스킬트리를 담은 배열이 매개변수로 주어질 때, 가능한 스킬트리 개수를 return
// 입력 : skill(선행 스킬 순서), skill_trees(유저들이 만든 스킬트리를 담은 배열)
// 출력: 가능한 스킬 트리 개수

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int valid_count = 0;
    
    for (const string& tree : skill_trees) {
        string filtered = "";
        
        for (char s : tree) {
            if (skill.find(s) != string::npos) {
                filtered += s;
            }
        }
        
        bool is_valid = true;
        for (int i = 0; i < filtered.size(); ++i) {
            if (filtered[i] != skill[i]) {
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            valid_count++;
        }
    }
    
    return valid_count;
}