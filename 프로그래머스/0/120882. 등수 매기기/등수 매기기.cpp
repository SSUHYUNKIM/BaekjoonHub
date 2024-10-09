#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    int n = score.size();
    vector<pair<double, int>> avg(n);
    vector<int> ranks(n);
    
    for (int i = 0; i < n; i++) {
        double average = (score[i][0] + score[i][1]) / 2.0;
        avg[i] = {average, i};
    }
    
    sort(avg.begin(), avg.end(), greater<pair<double, int>>());
    
    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0 || avg[i].first != avg[i - 1].first) {
            rank = i + 1;
        }
        ranks[avg[i].second] = rank;
    }
    
    return ranks;
}