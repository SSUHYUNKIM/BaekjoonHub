#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    numer1 *= denom2; // 1 * 4 = 4
    numer2 *= denom1; // 3 * 2 = 6
    
    int num1 = denom1 * denom2;
    int num2 = numer1 + numer2;
    int div = 2;
    
    while (div < 1000) {
        if(num1 % div == 0 && num2 % div == 0) {
            num1 /= div;
            num2 /= div;
        } else {
            div++;
        }
    }
    
    answer.push_back(num2);
    answer.push_back(num1);
    return answer;
}