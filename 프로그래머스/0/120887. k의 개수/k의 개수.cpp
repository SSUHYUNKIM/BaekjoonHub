#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string kStr = to_string(k); 
    
    for (int num = i; num <= j; num++) {
        string numStr = to_string(num);

        for (char c : numStr) {
            if (c == kStr[0]) {
                answer++;
            }
        }
    }
    
    return answer;
}