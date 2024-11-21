#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    
    for(auto a : arr) {
        sum += a;
    }
    
    return sum / arr.size();
}