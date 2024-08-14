#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num1[5] = {1, 2, 3, 4, 5};
int num2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int num3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int cnt[4] = {0, };
    
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == num1[i % 5])
            cnt[1]++;
        if (answers[i] == num2[i % 8])
            cnt[2]++;
        if (answers[i] == num3[i % 10])
            cnt[3]++;
    }
    
    int maxCount = max({cnt[1], cnt[2], cnt[3]});
    
    for (int i = 1; i <= 3; i++) {
        if (cnt[i] == maxCount) {
            answer.push_back(i);
        }
    }
    
    return answer;
}