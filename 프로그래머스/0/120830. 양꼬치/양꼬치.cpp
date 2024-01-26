#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int discount = 0;
    answer += 12000 * n;
    discount = n / 10;
    answer += 2000 * (k - discount);
    return answer;
}