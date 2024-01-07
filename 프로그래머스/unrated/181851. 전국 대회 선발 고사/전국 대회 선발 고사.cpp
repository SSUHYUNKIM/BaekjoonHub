#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int, int>> student;
    
    for(int i = 0; i < rank.size(); ++i) 
    {
        if(attendance[i]) 
            student.push_back({rank[i], i});
    }
    
    sort(student.begin(), student.end());
    answer = 10000 * student[0].second + 100 * student[1].second + student[2].second;
    
    return answer;
}