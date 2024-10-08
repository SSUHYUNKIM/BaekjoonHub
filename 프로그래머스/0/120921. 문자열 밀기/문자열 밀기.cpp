#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    if (A == B) {
        return 0;
    }
    
    int len = A.size();
        
    for (int i = 1; i <= len; ++i) {
        A = A[len - 1] + A.substr(0, len - 1);
        
        if (A == B) {
            return i;
        }
    }
    
    return -1;
}