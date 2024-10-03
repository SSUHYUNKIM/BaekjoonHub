#include <string>
#include <vector>
#include<cmath>

using namespace std;

long long solution(int n, int t) {
    long long answer = n;
    for (int i = 0; i < t; i++) {
        answer *= 2;
    }
    return answer;
}