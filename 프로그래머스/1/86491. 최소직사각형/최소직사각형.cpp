#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0, max_width = 0, max_height = 0;

    for (auto size : sizes) {
        sort(size.begin(), size.end());
        max_width = max(max_width, size[1]);
        max_height = max(max_height, size[0]);
    }

    answer = max_width * max_height;
    return answer;
}