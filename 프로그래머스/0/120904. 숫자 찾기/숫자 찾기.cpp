#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string numStr = to_string(num);
        
    for(int i = 0; i < numStr.length(); i++) {
        if(numStr[i] == to_string(k)[0]) {
            return i + 1;
        }
    }
    
    return answer;
}