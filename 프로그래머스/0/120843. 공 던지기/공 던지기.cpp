#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int temp = (k - 1) * 2;
    answer = numbers[temp % numbers.size()];
    return answer;
}