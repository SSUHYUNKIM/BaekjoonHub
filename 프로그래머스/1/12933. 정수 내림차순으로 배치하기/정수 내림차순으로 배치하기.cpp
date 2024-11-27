#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string nStr = to_string(n);
    
    sort(nStr.begin(), nStr.end(), greater<>());
    
    return stoll(nStr);
}