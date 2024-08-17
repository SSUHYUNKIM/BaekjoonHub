#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> processQueue;
    priority_queue<int> priorityQueue;
    
    for(int i = 0; i < priorities.size(); i++) {
        processQueue.push(make_pair(priorities[i], i));
        priorityQueue.push(priorities[i]);
    }
    
    int order = 0;
    
    while(!processQueue.empty()) {
        int currentPriority = processQueue.front().first;
        int currentIndex = processQueue.front().second;
        processQueue.pop();

        if(currentPriority == priorityQueue.top()) {
            order++;
            priorityQueue.pop();

            if(currentIndex == location) {
                return order;
            }
        } else {
            processQueue.push(make_pair(currentPriority, currentIndex));
        }
    }
    
    return answer;
}