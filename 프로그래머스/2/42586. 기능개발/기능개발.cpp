#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for (int i = 0; i < progresses.size(); ++i) {
        int remainingProgress = 100 - progresses[i];
        int days = (remainingProgress + speeds[i] - 1) / speeds[i];
        q.push(days);
    }
    
    int currentMaxDays = q.front();
    q.pop();
    int cnt = 1;
    
    while (!q.empty()) {
        int currentDays = q.front();
        q.pop();

        if (currentDays <= currentMaxDays) {
            ++cnt;
        } else {
            answer.push_back(cnt);
            cnt = 1;
            currentMaxDays = currentDays;
        }
    }

    answer.push_back(cnt);
    return answer;
}